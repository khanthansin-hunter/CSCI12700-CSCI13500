#Name:  Khant Than Sin
#Email: khantthan.sin06@myhunter.cuny.edu
#Date:  December 18, 2024

# Step 1: Ask the user for the number of seconds
seconds = int(input("Enter number of seconds: "))

# Step 2: Calculate the number of hours
hours = seconds // 3600

# Step 3: Compute the remaining seconds
rem = seconds % 3600

# Step 4: Calculate the number of minutes
minutes = rem // 60

# Step 5: Calculate the remaining seconds
remSec = rem % 60

# Print the results
print("Hours:", hours)
print("Minutes:", minutes)
print("Seconds:", remSec)