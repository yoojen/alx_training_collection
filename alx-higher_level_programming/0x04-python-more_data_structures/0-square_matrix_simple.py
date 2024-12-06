#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    newList = []
    for i in matrix:
        newList.append(list(map(lambda a: a ** 2, i)))
    return newList
