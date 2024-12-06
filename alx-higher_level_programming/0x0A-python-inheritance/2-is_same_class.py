#!/usr/bin/python3
"""
returns true or false according to the same class
if same class returns true
if not the same returns false
"""


def is_same_class(obj, a_class):
    """ returns true if the object passed as arg is the same type"""
    if type(obj) is a_class:
        return True
    return False
