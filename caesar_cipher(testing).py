#Name: Khant Than Sin @Leo
#Email: khantthan.sin06@myhunter.cuny.edu
#Date: October 14, 2024

original = input("Enter a message: ").lower()
coded_message = ""

for c in original:
    # apply formula
    encrypt = ord(c) - 97       #ord(c) is unicode number   -97 since (a) starts at 97  now starts from 0 as new index
    encrypt = encrypt + 13      #increment index by 13
    encrypt = encrypt % 26      #get remainder for new index
    encrypt = encrypt + 97      #change index to unicode number
    encrypt = chr(encrypt)      #change unicode number to character
    coded_message += encrypt    #keep adding new characters to empty string (placeholder)

print("Your word in code is:", coded_message)

"""
original_text=input("Enter a message: ").lower()
deciphered_text=""
number=ord(original_text)

for letters in original_text:
    if "a" <= letters <= "z":
        new_letters = letters
        for values in range(13):
            if new_letters == "z":
                new_letters = "a"
            else:
                new_letters = chr(ord(new_letters) + 1)
    else:
        print("Invalid")

#assign letter a to 1 in ascending order
#loop from 1 to 25 with repetition but no exceeding (OR) use modulo operator
#assign number to letter
#print the result

print("Your deciphered message for", original_text, "is", deciphered_text)

#test codes
print(number)
"""

"""
Expected Output
Enter a word: zebra
Your word in code is: mroen
"""