#!/usr/bin/python3
# The weight of string = Sum of weight of each individual character. The weight of each character can be set
# by you. It should be some positive integer number.

string=input("Enter a sting:\n")
print("Calculating weight of sting based on:\n Num:'0'=0, '1'=1,'2'=2...\n'a'=2,'b'=4,'c'=6,...,A=10,B=20,C=30,...\nwhitespaces and other characters=0")
str_len=len(string)
weight=0
for i in range(str_len):
    asci=ord(string[i])
    if(asci>=65 and asci<=90):# A-Z
        weight=weight+((asci-64)*10)
    elif(asci>=97 and asci<=122):# a-z
        weight=weight+((asci-96)*2)
    elif(asci>=48 and asci<=57):# numbers
        weight=weight+((asci-48))
        
print("The weight of the string is:\n", weight)
    