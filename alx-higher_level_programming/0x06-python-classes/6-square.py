#!/usr/bin/python3

""" Creation of square class that has size as its private variable"""


class Square:

    """ Initialization of class with init"""
    def __init__(self, size=0, position=(0, 0)):
        self.__size = size
        self.__position = position
    """ creation of property that set size of the square """
    @property
    def size(self):
        return self.__size
    """ creation of property setter that set private variable """
    @size.setter
    def size(self, value):
        if type(value) is not int:
            raise TypeError("size must be an integer")
        elif value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    @property
    def position(self):
        return self.__position

    @position.setter
    def position(self, value):
        if (not isinstance(value, tuple) or
                (len(value) != 2) or
                (not isinstance(i, int) for i in range(len(value))) or
                (j < 0 for j in value)):
            raise TypeError("position must be a tuple of 2 positive integers")
        else:
            self.position == value
    """ Creation of public instance method that return area of square """
    def area(self):
        return self.__size * self.__size
    """ my_print method that print square """
    def my_print(self):
        mystr = '#'
        if self.__size == 0:
            print("")
        return
        [print("") for i in range(self.__position[1])]
        for i in range(0, self.__size):
            [print("", end="") for i in range(0, self.__position[0])]
            print(mystr * self.__size)
