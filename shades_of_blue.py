#Name: Khant Than Sin @Leo
#Email: khantthan.sin06@myhunter.cuny.edu
#Date: September 25, 2024

import turtle
screen = turtle.Screen()

turtle.colormode(255)		#gives full color range for RGB
tess = turtle.Turtle()
tess.shape("turtle")
tess.backward(100)			#Moving back to give more space to draw

for i in range(0,255,10):   #For 0,10,20,...,250
     tess.forward(10)		#Move forward
     tess.pensize(i)		#pensize increases with the loop
     tess.color(0,0,i)		#blue color increases with the loop, red and green stays static

screen.exitonclick()

#make a turtle
#use colormode
#shape a turtle
#move backward to make enough space
#looping for incrementing pensize and color
#move forward step of 10
#pensize increase from 0 to 255 with step of 10
#turtle color increase from 0 to 255 with step of 10 for blue color excluding red and green