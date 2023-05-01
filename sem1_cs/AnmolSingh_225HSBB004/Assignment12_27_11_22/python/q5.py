#!/usr/bin/python3
# Write a script that  converts a decimal (base 10) number to a binary number. Print both the numbers.

def deci_2_bin(decimal):
    j=0
    binary=0
    quet=decimal
    while(quet>0):
        binary=(binary)+((quet%2)*(10**j))
        j+=1
        quet=int(quet/2)
    return binary

num=int(input("Enter a number:"))
binary=deci_2_bin(num)
print("Binary conversion of ", num, " is ",binary)
