#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    holder = []
    listOfValues = list(a_dictionary.values())
    for i in listOfValues:
       holder.append(i * 2)
    newDict = dict(zip(list(a_dictionary.keys()), holder))
    return newDict
