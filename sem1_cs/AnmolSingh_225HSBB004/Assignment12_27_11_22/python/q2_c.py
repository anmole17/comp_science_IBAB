#!/usr/bin/python3
# Write a program to compare two strings and print the common letters in both. It is not case sensitive.

string1=input("Enter first string:\n")
string2=input("Enter second string:\n")

common=[]

for words in string1:
    for words2 in string2:
        for letters in words:
            for letters2 in words2:
                if ((letters==letters2 or letters==chr(ord(letters2)+32) or letters==chr(ord(letters2)-32)) and letters not in common):
                    common.append(letters) 
print("Common letters:")
for i in common:
    print(" ", i)
          