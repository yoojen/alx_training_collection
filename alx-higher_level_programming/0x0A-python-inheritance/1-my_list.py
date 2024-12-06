#!/usr/bin/python3
"""
MyClass class inherit from list class
"""


class MyList(list):
    """ inherit from the builtin class list and make empty list """
    def print_sorted(self):
        """from the list it prints the sorted list"""
        print(sorted(self))
