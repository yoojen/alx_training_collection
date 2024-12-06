#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    try:
        for i in my_list:
            j = i
        if x > j:
            x = j
        for c in range(x):
            print("{}".format(my_list[c]), end="")
        print()
    except IndexError:
        print("IndexErro\n")
    return x
