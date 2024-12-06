#!/usr/bin/python3
"""
if the instance is inherited from the class
true if right
false if it is not right
"""


def is_kind_of_class(obj, a_class):
    """check if the instance is inhertied from the same class"""
    return isinstance(obj, a_class)
