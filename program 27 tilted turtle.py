#Name: Khant Than Sin @Leo
#Email: khantthan.sin06@myhunter.cuny.edu
#Date: December 18, 2024

import turtle

TT = turtle.Turtle()
DD = turtle.Screen()

#range from 90 to 0, forward (25), left (range)
i = 90

while i >= 0:
    TT.forward(25)
    TT.left(i)
    i -= 2

DD.exitonclick()