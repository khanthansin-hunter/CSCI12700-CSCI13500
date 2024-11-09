import numpy
import pandas
import folium
import image
import matplotlib
import scipy
#install libraries: numpy pandas folium image matplotlib scipy

print('Hello, World!')

#Turtle GUI

import turtle
turtle_1 = turtle.Turtle()
turtle_2 = turtle.Turtle()

window = turtle.Screen()

square_angles = 360/4
square_sides = 4

octagon_angles = 360/8
octagon_sides = 8

turtle_1.penup()
turtle_1.forward(100)
turtle_1.pendown()

turtle_2.penup()
turtle_2.backward(200)
turtle_2.pendown()

for iterations in range(square_sides):
    turtle_1.forward(100)  # Move forward 100 steps
    turtle_1.left(square_angles)  # Turn to the left

for iterations in range(octagon_sides):
    turtle_2.forward(100)
    turtle_2.left(octagon_angles)

window.exitonclick()