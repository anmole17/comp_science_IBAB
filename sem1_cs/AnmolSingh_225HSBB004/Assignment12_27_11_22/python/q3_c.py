#!/usr/bin/python3
#Write a program that calculates the length of a string without using any library from string.h

string=input("Enter string:\n")
count=0
for words in string:
    for char in words:
        count+=1

print("The length of the string is:\n", count)