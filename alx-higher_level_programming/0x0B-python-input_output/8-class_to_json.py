#!/usr/bin/python3
"""
respresantation of any data structure as dict
"""


def class_to_json(obj):
    """returns dictionary represantion of any data structure"""
    return obj.__dict__
