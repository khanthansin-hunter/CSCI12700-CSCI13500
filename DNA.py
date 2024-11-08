#Name: Khant Than Sin @Leo
#Email: khantthan.sin06@myhunter.cuny.edu
#Date: October 22, 2024

INPUT_1 = input("Enter a DNA string: ").upper()
OUTPUT_1 = len(INPUT_1)             #length
C = INPUT_1.count('C')              #CG
G = INPUT_1.count('G')              #CG
OUTPUT_2 = (C+G)/len(INPUT_1)       #percentage
print(OUTPUT_1)
print(OUTPUT_2)
