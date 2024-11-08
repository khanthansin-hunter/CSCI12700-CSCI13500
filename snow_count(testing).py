#Name: Khant Than Sin @Leo
#Email: khantthan.sin06@myhunter.cuny.edu
#Date: October 18 2024

import matplotlib.pyplot as plt
import numpy as np

def counting_snow():
    image_input = input("Enter image name: ")
    image_feed = plt.imread(image_input)
    plt.imshow(image_feed)
    plt.show()
    countSnow = 0
    countSnow2 = 0
    white = 0.75
    for x in range (image_feed.shape[0]):       #for all width pixels given shape function
        for y in range(image_feed.shape[1]):    #for all height pixels given shape function
            if (image_feed[x,y,0]>white) and (image_feed[x,y,1]>white) and (image_feed[x,y,2]>white):
            #[width,height,red] and [width,height,green] and [width,height,blue]
                countSnow = countSnow+1
            if (image_feed[x,y,0]>white) or (image_feed[x,y,1]>white) or (image_feed[x,y,2]>white):
            #[width,height,red] and [width,height,green] and [width,height,blue]
                countSnow2 = countSnow2+1
    print('snow count of',countSnow)
    print('snow count of',countSnow2)

counting_snow()