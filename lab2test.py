"""
greeting = "Hello, World!"
print(greeting.upper())
print(greeting.lower())
print(len(greeting))
print(greeting.count('o'))
print(greeting.count(''))
print(greeting.find('ll'))

myinput = input('input: ')
for i in myinput:
    print(i, ord(i))
#ord(index) gives decimal ASCII value of each char
for i in range(65,70):
    print(i, chr(i))
#chr(index) within range(ASCII values) gives decimal ASCII value with char
for i in myinput.split():
    print(i)
#split() breaks a single word to multi words in a list

print(myinput[0])
print(myinput[1])
print(myinput[2])
print(myinput[-1])
print(myinput[-2])
print(myinput[-3])
print(myinput[-4])
print(myinput[-5])
#variable[index] prints the index of the variable
#negative value prints backwards
"""
C='B'
print(ord(C))
print(ord('C'))
#first line gives ASCII value of the letter B which is the value of C variable
#second line give ASCII value of the letter C

myinput = input('tell me: ')
for values in range(len(myinput)):
    print(myinput[values])