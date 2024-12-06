#!/usr/bin/python3
def print_last_digit(number):
    num = number
    num = str(num)
    toInt = num[-1]
    toInt = int(toInt)
    print("{:d}".format(toInt), end="")
    return toInt
