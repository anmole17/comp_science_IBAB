#!/usr/bin/python3
#Write a program to count the number of words in a file

fp = open("q1.txt","w")
print("Enter 5 lines into the file:")
for i in range(5):
    line=input()
    fp.write(line+'\n')
fp.close()


fp = open("q1.txt","r")

file=fp.read()
ch=''
ch2=''
count=0
for char in file:
    if ((char!=' ' or char !='\n') and (ch2==' 'or ch2=='\n') and (ch!=' ' or ch !='\n')):
        count+=1
    ch=ch2 
    ch2=char
fp.close()
print("Number of words in the file are:",count)
