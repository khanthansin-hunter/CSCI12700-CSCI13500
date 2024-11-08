#Name: Khant Than Sin @Leo
#Email: khantthan.sin06@myhunter.cuny.edu
#Date: November 7, 2024

import matplotlib.pyplot as plt
import numpy as np

original_image = input('Enter image name: ')
#original_image += '.png'
blue_image = plt.imread(original_image)
blue_image[:,:,0]=0
blue_image[:,:,1]=0
#plt.imshow(blue_image)
#plt.show()
new_image = input('Enter new image name: ')
#new_image += '.png'
plt.imsave(new_image, blue_image)