#Name: Khant Than Sin @Leo
#Email: khantthan.sin06@myhunter.cuny.edu
#Date: September 25, 2024

import turtle
screen = turtle.Screen()

tt = turtle.Turtle()
tt.shape("turtle")
tt.color("cornflowerblue")
edges = 5
turns = (360/5)
tt.stamp()
for looping in range(edges):
    tt.forward(100)
    tt.left(turns)
    tt.stamp()

screen.exitonclick()

#make a turtle
#shape a turtle
#color a turtle with name
#declare 5 turns
#declare angle for each turn
#stamp the start
#loop every turn
#move forward step of 100
#turn left with declared angle
#stamp every stop