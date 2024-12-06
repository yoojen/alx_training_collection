#!/usr/bin/python3
"""this model creates State class
      and connect to state table from MySQL
"""


from sqlalchemy import Column, Integer, String
from sqlalchemy.ext.declarative import declarative_base


Base = declarative_base()


class State(Base):
    """Represents a city for a MySQL database.
        args: -> id --- name
    """
    __tablename__ = 'states'
    id = Column(Integer, primary_key=True)
    name = Column(String(128), nullable=False)
