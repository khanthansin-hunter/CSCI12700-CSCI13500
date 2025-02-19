#Name: Khant Than Sin @Leo
#Email: khantthan.sin06@myhunter.cuny.edu
#Date: December 18, 2024

import random
import turtle

TT = turtle.Turtle()
TT.speed(0)
#Screen = turtle.Screen()

#100 iterations
#1 iteration = forward(30)
#1 iteration = turn left randomly from 0,10,20,30 to 350

target = 100
start = 0

while start<target:
    start+=1
    #turns = random.randrange(0,351,10)
    TT.left(random.randrange(0,351,10))
    TT.forward(30)
#Screen.exitonclick()