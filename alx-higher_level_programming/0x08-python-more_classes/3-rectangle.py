#!/usr/bin/python3
"""
class rectangle that defines a rectangle
"""


class Rectangle:
    """ defines a rectangle with w and l """
    def __init__(self, width=0, height=0):
        """ initialize rectangle
        Args:
            width (int): The width of the new rectangle.
            height (int): The height of the new rectangle.
        """
        self.width = width
        self.height = height

    @property
    def width(self, width=0, height=0):
        """ return private instance of the rectangle"""
        return self.__width

    @width.setter
    def width(self, value):
        if not isinstance(value, int):
            raise TypeError("width must be an integer")
        if value < 0:
            raise ValueError("width must be >= 0")
        self.__width = value

    @property
    def height(self):
        """ height of the rctnagle as private instance"""
        return self.__height

    @height.setter
    def height(self, value):
        if not isinstance(value, int):
            raise TypeError("height must be an integer")
        if value < 0:
            raise ValueError("height must be >= 0")
        self.__height = value

    def area(self):
        """ return the area of the rectangle accordingly """
        return self.height * self.width

    def perimeter(self):
        """ return the perimeter of the rectangle accordingly """
        if self.width == 0 or self.height == 0:
            return 0
        else:
            return ((2 * self.width) + (2 * self.height))

    def __str__(self):
        """Return the printable representation of the Rectangle.

        Represents the rectangle with the # character.
        """
        if self.__width == 0 or self.__height == 0:
            return ("")

        pr = []
        for i in range(self.__height):
            [pr.append('#') for j in range(self.__width)]
            if i != self.__height - 1:
                pr.append("\n")
        return ("".join(pr))
