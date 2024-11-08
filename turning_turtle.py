#Name: Khant Than Sin @Leo
#Email: khantthan.sin06@myhunter.cuny.edu
#Date: October 1, 2024

"""
# CHATGPT version
import turtle
ARROW = turtle.Turtle()
SCREEN = turtle.Screen()

TURNS = 5
inputs_list = []  # Create an empty list to store inputs

# Collect all inputs and append them to the list
for loop in range(TURNS):
    user_input = int(input("Enter an integer: "))
    inputs_list.append(user_input)  # Append the input to the list

# Use the collected inputs to control the turtle
for turn in inputs_list:
    ARROW.left(turn)    # Use the input for the left turn
    ARROW.forward(100)  # Move forward

SCREEN.exitonclick()
"""

import turtle
ARROW=turtle.Turtle()
SCREEN=turtle.Screen()

TURNS=5

for loop in range(TURNS):
    INPUTS = int(input("Enter an integer"))
    ARROW.left(INPUTS)
    ARROW.forward(100)

SCREEN.exitonclick()

#create a turtle
#declare number of turns
#loop for each turns
#ask an integer input
#turn left with step of input
#move forward step of 100