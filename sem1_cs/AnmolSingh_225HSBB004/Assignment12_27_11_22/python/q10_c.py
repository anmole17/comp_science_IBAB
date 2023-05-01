#!/usr/bin/python3
#Write a C program that takes a string and creates a palindrome.

string=input("Enter a string:\n")
pal=""
for word in string:
    for char in word:
        pal=char+pal
pal=string[:-1]+pal
print("The palindrome for the string is:", pal)