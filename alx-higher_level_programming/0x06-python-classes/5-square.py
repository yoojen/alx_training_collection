#!/usr/bin/python3

""" Creation of square class that has size as its private variable"""


class Square:

    """ Initialization of class with init"""
    def __init__(self, size=0):
        if type(size) is not int:
            raise TypeError("size must be an integer")
        elif size < 0:
            raise ValueError("size must be >= 0")
        else:
            self.__size = size
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
    """ Creation of public instance method that return area of square """
    def area(self):
        return self.__size * self.__size
    """ my_print method that print square """
    def my_print(self):
        mystr = '#'
        for i in range(0, self.__size):
            print(mystr * self.__size)
