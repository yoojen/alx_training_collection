#!/usr/bin/python3
def uniq_add(my_list=[]):
    sumOfAll = 0
    unique = []
    for i in my_list:
        if i not in unique:
            unique.append(i)
    for i in unique:
        sumOfAll += i
    return sumOfAll
