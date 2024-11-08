#Name: Khant Than Sin @Leo
#Email: khantthan.sin06@myhunter.cuny.edu
#Date: September 5, 2024

import turtle
screen = turtle.Screen()

window = screen.getcanvas().winfo_toplevel()
window.attributes("-topmost", True)

octagon = turtle.Turtle()
sides = 8
corners = 360/8

for i in range(sides):
    octagon.forward(100)
    octagon.left(corners)
turtle.done()
#screen.exitonclick()