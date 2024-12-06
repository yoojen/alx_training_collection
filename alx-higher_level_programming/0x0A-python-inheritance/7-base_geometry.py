#!/usr/bin/python3
"""
Class Called BaseGeometry
"""


class BaseGeometry:
    """This is a class called BaseGeometry"""
    def area(self):
        """This Function Raise an Error"""
        raise Exception("area() is not implemented")

    def integer_validator(self, name, value):
        """Check if Value is a positive integer"""
        if type(value) != int:
            raise TypeError(f"{name} must be an integer")
        if value <= 0:
            raise ValueError(f"{name} must be greater than 0")
