#!/usr/bin/python3
def search_replace(my_list, search, replace):
    nz = my_list[:]
    for i in range(len(my_list)):
        if nz[i] == search:
            nz[i] = replace
    return nz
