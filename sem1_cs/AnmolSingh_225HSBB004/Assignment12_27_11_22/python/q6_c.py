#!/usr/bin/python3
# Write a C program to write at least 3 lines of text into a text file. Next, read from the same file
#and check for the presence of vowels (a,e,i,o,u ) and (A,E,I,O,U). If present print the vowel followed
#by "present" mesg.

fp = open("q6_c.txt","w");
vowels=[]
print("Enter 5 lines:")
for i in range(5):
    line=input()
    fp.write(line+'\n');
fp.close()
fp = open("q6_c.txt","r");

file=fp.read()

for words in file:
    for chars in words:
        if (chars=='a'or chars=='A' or 
                chars=='e'or chars=='E'or 
				chars=='i'or chars=='I'or 
				chars=='o'or chars=='O'or 
				chars=='u'or chars=='U'):
                if(chars not in vowels):
                    vowels.append(chars)

print("Vowels present:")
for vowel in vowels:
    print(vowel, "present")




