#!/usr/bin/python3
for num in range(100):
    if num < 10:
        num = str(num)
        num = '0' + num
    if num == 99:
        print("{}".format(num))
    else:
        print("{},".format(num), end=" ")
