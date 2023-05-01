#!usr/bin/python3

file1=open("file.txt", 'r')
rev=""
for i in file1:
    rev=rev+i[::-1]
    rev=rev+'\n'
print(rev)

