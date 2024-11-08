#Name: Khant Than Sin @Leo
#Email: khantthan.sin06@myhunter.cuny.edu
#Date: October 18 2024

user_input = input('Enter how many hours before weekend: ')
# USER INPUTS 32
# 1) DIVIDE BY 24 TO GET DAYS
# 2) DIVIDE BY 24 AND TAKE REMAINDER TO GET HOURS
days = int(user_input)//24  #floor division
hours = int(user_input)%24  #modulus/remainder operator

print(days, 'days and', hours, 'hours')