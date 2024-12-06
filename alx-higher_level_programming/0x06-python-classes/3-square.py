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
    """ Creation of public instance method that return area of square """
    def area(self):
        return self.__size * self.__size
