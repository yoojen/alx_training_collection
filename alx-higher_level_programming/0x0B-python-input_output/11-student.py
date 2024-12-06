#!/usr/bin/python3
"""
return dict represantation of self class
"""


class Student:
    """Student class"""
    def __init__(self, first_name, last_name, age):
        """initialize a student"""
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self, attrs=None):
        """returns __dict__"""
        if(type(attrs) == list and
           all(type(items) == str for items in attrs)):
            return {k: getattr(self, k) for k in attrs if hasattr(self, k)}
        return self.__dict__

    def reload_from_json(self, json):
        for keys, values in json.items():
            setattr(self, keys, values)
