#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv

    args = argv
    size = len(args) - 1
    sum = 0
    if size == 0:
        sum = 0
    elif size == 1:
        sum += int(args[size])
    else:
        for i in range(1, size + 1):
            sum += int(args[i])
    print(sum)
