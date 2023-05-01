#!/usr/bin/python3
#Write a program to count the number of characters in a file

fp = open("q1.txt","w")
print("Enter 5 lines into the file:")
for i in range(5):
    line=input()
    fp.write(line+'\n')
fp.close()
cnt=0
letters=0

fp = open("q1.txt","r")
file=fp.read()
for char in file:
    asci=ord(char)
    cnt+=1
    if((asci>=65 and asci<=90) or (asci>=97 and asci<=122)):
        letters+=1
fp.close()
    
print("The number of characters in the file is", cnt,".\nNo. of alphabets in the file is",letters)