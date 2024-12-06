#!/usr/bin/python3
"""
Rectangle class that inherits from Base
"""
from models.base import Base


class Rectangle(Base):
    """this class inherit from base class"""
    def __init__(self, width, height, x=0, y=0, id=None):
        super().__init__(id)
        self.width = width
        self.height = height
        self.x = x
        self.y = y

    @property
    def width(self):
        return self.__width

    @width.setter
    def width(self, valuePased):
        if type(valuePased) != int:
            raise TypeError("width must be an integer")
        if valuePased <= 0:
            raise ValueError("width must be > 0")
        self.__width = valuePased

    @property
    def height(self):
        return self.__height

    @height.setter
    def height(self, valuePased):
        if type(valuePased) != int:
            raise TypeError("height must be an integer")
        if valuePased <= 0:
            raise ValueError("height must be > 0")
        self.__height = valuePased

    @property
    def x(self):
        return self.__x

    @x.setter
    def x(self, valuePased):
        if type(valuePased) != int:
            raise TypeError("x must be an integer")
        if valuePased < 0:
            raise ValueError("x must be >= 0")
        self.__x = valuePased

    @property
    def y(self):
        return self.__y

    @y.setter
    def y(self, valuePased):
        if type(valuePased) != int:
            raise TypeError("y must be an integer")
        if valuePased < 0:
            raise ValueError("y must be >= 0")
        self.__y = valuePased

    def area(self):
        """return the area of the rectangle"""
        return self.height * self.width

    def display(self):
        """print the rectangle in form of #"""
        [print("") for i in range(self.y)]
        for i in range(self.height):
            [print(" ", end="") for i in range(self.x)]
            [print("#", end="") for j in range(self.width)]
            print("")

    def update(self, *args, **kwargs):
        """
        it assigns argument to each attribute
        1st arg = id
        2nd arg = widht
        3rd  arg = heihgt
        4th arg = x
        5th arg = y
        """
        if len(args) != 0:
            single_item = 0
            for arg in args:
                """
                we need to initialize a var
                to keep track of increase of tuple size
                """
                if single_item == 0:
                    if arg is None:
                        self.__init__(self.width, self.height, self.x, self.y)
                    else:
                        self.id = arg

                if single_item == 1:
                    self.width = arg

                if single_item == 2:
                    self.height = arg

                if single_item == 3:
                    self.x = arg

                if single_item == 4:
                    self.y = arg
                single_item += 1

        if len(kwargs) != 0:
            for key, value in kwargs.items():
                if key == "id":
                    if value is None:
                        self.__init__(self.width, self.height, self.x, self.y)
                    self.id = value
                elif key == "width":
                    self.width = value
                elif key == "height":
                    self.height = value
                elif key == "x":
                    self.x = value
                elif key == "y":
                    self.y = value

    def to_dictionary(self):
        """returns dictionary presentation of the rectangle"""
        return {
            "id": self.id,
            "width": self.width,
            "height": self.height,
            "x": self.x,
            "y": self.y
        }

    def __str__(self):
        """return string presantation of the class"""
        return "[Rectangle] ({}) {}/{} - {}/{}".format(self.id,
                                                       self.x, self.y,
                                                       self.width, self.height)
