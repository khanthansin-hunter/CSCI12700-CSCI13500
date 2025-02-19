#Name:  Khant Than Sin
#Email: khantthan.sin06@myhunter.cuny.edu
#Date:  December 18, 2024

# Prompt the user to enter a list of names
names = input("Please enter your list of names: ")

# Split the input into a list of individual names using "; " as the delimiter
name_list = names.split("; ")

# Prepare the output list
formatted_names = []

# Process each name in the list
for name in name_list:
    # Split each name into lastName and firstName using ", " as the delimiter
    last_name, first_name = name.split(", ")
    # Extract the first initial and format the output
    formatted_name = first_name[0] + ". " + last_name
    # Add the formatted name to the output list
    formatted_names.append(formatted_name)

# Print the output
print("\nYou entered:\n")
for formatted_name in formatted_names:
    print(formatted_name)

print("\nThank you for using my name organizer!")