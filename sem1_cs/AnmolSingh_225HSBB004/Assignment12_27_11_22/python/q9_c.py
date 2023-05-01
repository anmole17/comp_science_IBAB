#!/usr/bin/python3
# Write a program that writes at least 4 lines of text into 2 different text files. Now read from these
# two files, merge the content and display the same, write the merged content onto another text file.

file1=open("q8_1.txt",'w')

file2=open("q8_2.txt",'w')

print("Enter 5 lines for first file:")
for i in range(5):
    line=input()
    file1.write(line+'\n')
file1.close()

print("Enter 5 lines for second file:")
for i in range(5):
    line=input()
    file2.write(line+'\n')
file2.close()

fp1=open("q8_1.txt",'r')

fp2=open("q8_2.txt",'r')
merged=open("q8_merged.txt", 'w')

file1=fp1.read()
merged.write(file1)

file2=fp2.read()
merged.write(file2)
merged.close()
merged=open("q8_merged.txt", 'r')
merg=merged.read()


print("\nMerged file:")
print(merg)
