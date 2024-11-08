#Name: Khant Than Sin @Leo
#Email: khantthan.sin06@myhunter.cuny.edu
#Date: October 28, 2024

import turtle

TT = turtle.Turtle()

user_input = input('Enter command: ')

def movement():
    for letters in user_input:
        if letters == 'F':
            TT.forward(50)
        elif letters == 'L':
            TT.left(90)
        elif letters == 'R':
            TT.right(90)
        elif letters == '^':
            TT.penup()
        elif letters == 'v':
            TT.pendown()
        elif letters == 'B':
            TT.backward(50)
        elif letters == 'l':
            TT.left(45)
        elif letters == 'r':
            TT.right(45)
        elif letters == 'S':
            TT.stamp()
        elif letters == 'p':
            TT.pencolor('purple')
        else:
            print('invalid input')

movement()