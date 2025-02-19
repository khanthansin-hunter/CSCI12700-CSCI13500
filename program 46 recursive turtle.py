#Name:  Khant Than Sin
#Email: khantthan.sin06@myhunter.cuny.edu
#Date:  December 18, 2024

import turtle

def triangle(t, length):
    # According to the pseudocode:
    # 1. If length > 10:
    # 2.    Repeat 3 times:
    # 3.        Move t forward length steps.
    # 4.        Turn t left 120 degrees.
    # 5.    Call triangle with t and length/2 after drawing all sides.

    if length > 10:
        for _ in range(3):
            t.forward(length)
            t.left(120)
        # After drawing the 3 sides, make the recursive call
        triangle(t, length/2)


def nestedTriangle(t, length):
    # According to the pseudocode for nestedTriangle():
    # 1. If length > 10:
    # 2.    Repeat 3 times:
    # 3.        Move t forward length steps.
    # 4.        Turn t left 120 degrees.
    # 5.        Call nestedTriangle with t and length/2 after each side is drawn

    if length > 10:
        for _ in range(3):
            t.forward(length)
            t.left(120)
            # After each side, make the recursive call
            nestedTriangle(t, length/2)