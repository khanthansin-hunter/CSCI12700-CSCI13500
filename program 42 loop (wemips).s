# Name:  Khant Than Sin
# Email: khantthan.sin06@myhunter.cuny.edu
# Date:  December 18, 2024

ADDI $s1, $zero, $zero
ADDI $s2, $zero, 20

AGAIN: ADDI $s1, $zero, 2
BEQ $s1, $s2, DONE
J AGAIN

DONE: