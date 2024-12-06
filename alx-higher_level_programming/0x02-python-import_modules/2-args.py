#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    args = argv
    size = len(args) - 1
    if (size == 0):
        print("{} arguments.".format(size))
    elif size == 1:
        print("{} argument:".format(size))
        print("{}: {}".format(size, args[1]))
    else:
        print("{} arguments:".format(size))
        for i in range(1, size + 1):
            print("{}: {}".format(i, args[i]))
