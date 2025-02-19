import turtle

# Ask the user to enter their first name
first_name = input("Please enter your first name: ")

# Get the length of the name and store it in a variable
name_length = len(first_name)

# Initialize the turtle
t = turtle.Turtle()

# Set the number of sides equal to the length of the name
num_sides = name_length

# Calculate the angle for the polygon
angle = 360 / num_sides

# Draw the polygon
for _ in range(num_sides):
    t.forward(100)  # Move the turtle forward by 100 units
    t.left(angle)   # Turn the turtle left by the calculated angle

# Hide the turtle and display the window
turtle.done()