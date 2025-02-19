#Name:  Khant Than Sin
#Email: khantthan.sin06@myhunter.cuny.edu
#Date:  December 18, 2024

# Ask user for a binary number
binString = input("Enter a binary number: ")

# Initialize decimal number to 0
decNum = 0

# Iterate over each character in the binary string
for i in binString:
    decNum = decNum * 2  # Multiply current decimal value by 2
    if i == '1':  # Check if the character is '1'
        decNum = decNum + 1  # Add 1 to decimal value if the character is '1'

# Print the resulting decimal number
print("The decimal equivalent is:", decNum)