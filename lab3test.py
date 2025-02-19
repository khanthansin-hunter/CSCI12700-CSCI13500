"""
def printnums(x,y):
    for h in range(y):
        print("We made it here!")
        for i in range(x):
            print("We made it here!")

printnums(5, 3)

def sumTo(aBound):
    theSum = 0
    for aNumber in range(1, aBound + 1):
        theSum = theSum + aNumber

    return theSum

print(sumTo(4))

# sumTo - function for aBound
# theSum - variable value holder
# aNumber - variable loop function
# aBound - function variable

#print(sumTo(1000))

def mirror_message_upside_down(message):
    lines = []  # List to store each line
    # Split the message into individual characters
    for char in message:
        if char != " ":
            lines.append(f"{char} {char}")  # Add each character twice to the list
        else:
            lines.append(" ")  # Add a space as a line

    # Print the lines in reverse order
    for line in reversed(lines):
        print(line)


# Test the function with the example message
mirror_message_upside_down("I love Python!")
"""

#Color by red-green-blue (RGB):

import turtle

turtle.colormode(255)
TT = turtle.Turtle()
display = turtle.Screen()

for methods in range(1):
    TT.color("red")
    TT.stamp()
    TT.left(180)
    TT.color("#0000CD")
    TT.stamp()
    TT.color(0,255,0)
    TT.right(90)

display.exitonclick()

import matplotlib.pyplot as plt
import numpy as np

img = plt.imread('csBridge.png')        #load image from directory
#plt.imshow(img)                         #display specific image
plt.show()                              #display all image

img2 = img.copy()
img2[:,:,0]=0           #row,column,red channel
img2[:,:,1]=0           #row,column,green channel
img2[:,:,2]=0           #row,column,blue channel

plt.imshow(img2)
plt.show()

"""
terminal commands
ls                      #show files and directories
ls -l                   #show files and directories in details
ls folder_name          #show files and directories in specific location
mv                      #move files and directories | rename files and directories
cd                      #move directories
mkdir                   #make new single | multiple | nested directories
pwd                     #show current directory
"""