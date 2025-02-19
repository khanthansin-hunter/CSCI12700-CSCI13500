#int()
#float()
#str()

import numpy as np
import matplotlib.pyplot as plt

example1 = float(input("Enter distance in kilometers: "))
miles = 0.621371*example1
print(example1, "km is equal to", miles, "miles")

elevations = np.loadtxt('elevationsNYC.txt')
#plt.imshow(elevations)
#plt.show()

mapShape = elevations.shape + (3,)          #(,)at the end makes it a tuple
                                            #declared 3 specifically as opposed to 2 to add color channel to row and column
floodMap = np.zeros(mapShape)               #creating numpy array filled with zeros

for row in range(mapShape[0]):
    for col in range(mapShape[1]):
        if elevations[row,col] <=0:
            floodMap[row,col,2]=1
        elif elevations[row,col] <=6:
            floodMap[row,col,0]=1
        else:
            floodMap[row,col,1]=1

plt.imshow(floodMap)
plt.show()