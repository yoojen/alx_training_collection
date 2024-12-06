#!/usr/bin/python3
"""
This is the module  0-add_integer.py
it taes two numbers as arguments and return
its summation as return type
"""


def add_integer(a, b=98):
    '''
    add to integer and return its sum after runtime
    '''
    if ((not isinstance(a, int) and not isinstance(a, float))):
        raise TypeError("a must be an integer")
    if ((not isinstance(b, int) and not isinstance(b, float))):
        raise TypeError("b must be an integer")
    return (int(a) + int(b))
