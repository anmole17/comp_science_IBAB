#!/usr/bin/python3
# Write a program to reverse a string and print both original and reversed strings.

string=input("Enter string:\n")

reverse=''

for words in string:
    for char in words:
        reverse=char+reverse

print("Original string:", string,"\nReverse string:",reverse)
