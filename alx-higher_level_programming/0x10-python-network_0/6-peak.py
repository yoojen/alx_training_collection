#!/usr/bin/python3
"""finds pick in unsorted list"""


def find_peak(list_of_integers):
    """returns peak"""
    offset = 1
    if len(list_of_integers) < 1:
        return None
    else:
        if len(list_of_integers) > 2:
            for i in range(len(list_of_integers)):
                if i > 0 and i < len(list_of_integers):
                    if list_of_integers[i] >= list_of_integers[i + offset] \
                            and list_of_integers[i] >= \
                            list_of_integers[i - offset]:
                        return list_of_integers[i]
