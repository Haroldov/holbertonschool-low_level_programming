#!/usr/bin/python3
def isPal(num):
    string = str(num)
    length = len(string)
    firstHalf = string[:length // 2]
    secondHalf = string[(length // 2) + 1:][::-1]
    if (firstHalf == secondHalf):
        print("{0:03d} * {1:03d} = {2:d} | ".format(num1, num2, num1 * num2), end="")
        print("{} - {} PALINDROME".format(firstHalf, secondHalf))
        return(1)
    else:
        return(-1)

lastPal = 0
for num1 in range(1000):
    for num2 in range(1000):
        check = isPal(num1 * num2)
        if check == 1:
            lastPal = num1 * num2
