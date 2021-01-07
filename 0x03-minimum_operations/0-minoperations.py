#!/usr/bin/python3
"""Interview preparation
    """


def minOperations(n):
    """text editor can execute only two operations in this file:
    Copy All and Paste.

    Args:
        n (int): write a method that calculates the fewest number

    Returns:
        int:  number of operations needed to result in exactly
    """

    inp = n
    numOpperations = 0
    module = 2

    if n <= 1:
        return 0

    while inp > 1:
        if inp % module == 0:
            inp = inp / module
            numOpperations = numOpperations + module
        else:
            module += 1
    return numOpperations
