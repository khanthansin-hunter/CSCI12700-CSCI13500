import matplotlib.pyplot as plt
import numpy as np
userinput = int(input("Enter a integer between 0 and 2: "))

map = np.ones((10,10,3))

if userinput <= 0 or userinput >= 2:
    print("Invalid input")
    exit()
else:
    map[:,:,:]=0

plt.imshow(map)
plt.show()