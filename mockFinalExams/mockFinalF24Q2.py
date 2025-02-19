"""
Complete the Python program below that creates a topographic map. Your program should first
ask the user for the amount of red.
The pixels of the image should be colored as follows:
If the elevation is less than or equal to 0, color the pixel the amount of red the user specified.
If the elevation is divisible by 5, color the pixel black.
Otherwise, the pixel should be colored white.
The resulting image should be displayed to the user after all the pixels are colored.
"""

import numpy as np
import matplotlib.pyplot as plt

elevations = np.loadtxt("elevationsNYC.txt")
mapShape = elevations.shape + (3,)
topoMap = np.zeros(mapShape)

red = input("Enter value: ")
row = mapShape[0]
column = mapShape[1]
if row and column <= 0:
    topoMap[:,:,0] = red
elif row and column % 5 == 0:
    topoMap[:,:,1] = 0.0
else:
    topoMap[:,:,2] = 1.0


"""
red = float(input("Enter value: "))
for row in range(mapShape[0]):
    for column in range(mapShape[1]):
        if elevations[row,column] <= 0:
            topoMap[row,column,0]=red
        elif elevations[row,column] % 5 == 0:
            topoMap[row,column,:]=0.0
        else:
            topoMap[row,column,:]=1.0
"""