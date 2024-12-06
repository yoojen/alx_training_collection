#!/usr/bin/python3

""" Creation of square class that has size as its private variable"""


class Square:
    """Represent a square."""
    def __init__(self, size=0):
        self.__size = size

    @property
    def size(self):
        """Get/set the current size of the square."""
        return (self.__size)

    @size.setter
    def size(self, value):
        if (not(isinstance(value, int))) or (not(isinstance(value, float))):
            raise TypeError("size must be a number")
        if self.__size < 0:
            raise ValueError("size must be >= 0")

    def area(self):
        """Return the current area of the square."""
        return (self.__size * self.__size)

    def __eq__(self, other):
        """Define the == comparision to a Square."""
        return self.area() == other.area()

    def __ne__(self, other):
        """Define the != comparision to a Square."""
        return self.area() != other.area()

    def __gt__(self, other):
        """Define the >= comparision to a Square."""
        return self.area() > other.area()

    def __ge__(self, other):
        """Define the >= comparision to a Square."""
        return self.area() >= other.area()

    def __lt__(self, other):
        """Define the < comparision to a Square."""
        return self.area() < other.area()

    def __le__(self, other):
        """Define the <= comparision to a Square."""
        return self.area() <= other.area()
