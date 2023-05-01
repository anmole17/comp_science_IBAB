#!/usr/bin/python3
#Write a program to reverse the content of a file.line by line

fp = open("q4.txt","w")
print("Enter 5 lines into the file:")
for i in range(5):
    line=input()
    fp.write(line+'\n')
fp.close()

fp = open("q4.txt","r")
lines=""
for line in fp:
    temp=""
    for char in line:
        if(char!='/n'):
            temp=char+temp
    lines=lines+temp
fp.close()
fp = open("q4.txt","w")
fp.write(lines[1:])
fp.close()
print("Reverse line by line:")
print(lines[1:])

    