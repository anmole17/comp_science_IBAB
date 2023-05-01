#!/usr/bin/python3
# Write a C program to write at least 3 lines of text into a text file. Next, read from the same file
#and check for the presence of vowels (a,e,i,o,u ) and (A,E,I,O,U). If present print the vowel followed
#by "present" mesg. and position of vowel

fp = open("q6_c.txt","w")
vowels=[]
print("Enter 5 lines:")
for i in range(5):
    line=input()
    fp.write(line+'\n')
fp.close()
fp = open("q6_c.txt","r")

file=fp.read()
posA=[]
posE=[]
posI=[]
posO=[]
posU=[]
char_pos=0
for words in file:
    for chars in words:
        if (chars=='a'or chars=='A' ):
            posA.append(char_pos)
            char_pos+=1
            if(chars not in vowels):
                    vowels.append(chars)
        elif ( chars=='e'or chars=='E'):
            posE.append(char_pos)
            char_pos+=1
            if(chars not in vowels):
                    vowels.append(chars)
        elif ( chars=='i'or chars=='I'):
            posI.append(char_pos)
            char_pos+=1
            if(chars not in vowels):
                    vowels.append(chars)
        elif ( chars=='o'or chars=='O'):
            posO.append(char_pos)
            char_pos+=1
            if(chars not in vowels):
                    vowels.append(chars)
        elif ( chars=='u'or chars=='U'):
            posU.append(char_pos)
            char_pos+=1
            if(chars not in vowels):
                    vowels.append(chars)

                

print("\nVowels present:")
for vowel in vowels:
    if ( vowel=='a' or vowel=='A'):
        print(vowel, " present at pos:",end=" ")
        for pos in posA:
            print(pos,end=" ")
    elif ( vowel=='e' or vowel=='E'):
        print(vowel, " present at pos:",end=" ")
        for pos in posE:
            print(pos,end=" ")
    elif ( vowel=='i' or vowel=='I'):
        print(vowel, " present at pos:",end=" ")
        for pos in posI:
            print(pos,end=" ")
    elif ( vowel=='o' or vowel=='O'):
        print(vowel, " present at pos:",end=" ")
        for pos in posO:
            print(pos,end=" ")
    elif ( vowel=='u' or vowel=='U'):
        print(vowel, " present at pos:",end=" ")
        for pos in posU:
            print(pos,end=" ")
    print("")

