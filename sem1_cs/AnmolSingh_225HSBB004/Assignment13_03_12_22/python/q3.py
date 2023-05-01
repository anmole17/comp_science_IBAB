#!/usr/bin/python3
#Write a program to find a word in the file and replace it with another word

fp = open("q3.txt","w")
print("Enter 5 lines into the file:")
for i in range(5):
    line=input()
    fp.write(line+'\n')
fp.close()

find=input("Enter the word to find:\n")

replace=input("Enter the word to replace with:\n")
rep_file=""
fp = open("q3.txt","r")
for i in fp:
    words=i.split()
    for word in words:
        if (word==find):
            rep_file=rep_file+replace+" "
        else:
            rep_file=rep_file+word+" "
    rep_file=rep_file+"\n"
fp.close()

print("Replaced word in file:")
print(rep_file)

fp = open("q3.txt","w")
fp.write(rep_file)