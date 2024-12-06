#!/usr/bin/env python3

"""DB module
"""
from sqlalchemy import create_engine
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy.orm import sessionmaker
from sqlalchemy.orm.session import Session
from sqlalchemy.orm.exc import NoResultFound
from sqlalchemy.exc import InvalidRequestError
from user import Base, User


class DB:
    """DB class
    """

    def __init__(self) -> None:
        """Initialize a new DB instance
        """
        self._engine = create_engine("sqlite:///a.db", echo=False)
        Base.metadata.drop_all(self._engine)
        Base.metadata.create_all(self._engine)
        self.__session = None

    @property
    def _session(self) -> Session:
        """Memoized session object
        """
        if self.__session is None:
            DBSession = sessionmaker(bind=self._engine)
            self.__session = DBSession()
        return self.__session

    def add_user(self, email: str, hashed_password: str) -> User:
        """Save the user to the database

        Keyword arguments:
        email -- user email
        hashed_password -- hashed version of initial password
        Return: returns the user object
        """
        user = User(email=email, hashed_password=hashed_password)
        self._session.add(user)
        self._session.commit()
        return user

    def find_user_by(self, **kwargs) -> User:
        """find user in the db

        Keyword arguments:
        args -- arguments with key=value
        Return: returns the first row found in the users table
        """
        if not kwargs:
            raise InvalidRequestError

        col_names = User.__table__.columns.keys()
        for k in kwargs.keys():
            if k not in col_names:
                raise InvalidRequestError
        user = self._session.query(User).filter_by(**kwargs).first()
        if not user:
            raise NoResultFound
        return user

    def update_user(self, user_id: int, **kwargs) -> None:
        """searches for user and update when found"""
        if not kwargs:
            raise InvalidRequestError

        col_names = User.__table__.columns.keys()
        for k in kwargs.keys():
            if k not in col_names:
                raise ValueError
        found_user = self.find_user_by(id=user_id)

        for k, v in kwargs.items():
            setattr(found_user, k, v)
        self._session.commit()
