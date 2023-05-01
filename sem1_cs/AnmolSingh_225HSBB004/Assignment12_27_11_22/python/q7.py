#!/usr/bin/python3
#  Write a script that takes a string and splits it into 2 strings based on a cut off point. 
# Ex: If entered string is Bangalore, and cut off point is say 3, then the resultant strings are:
# Ban and galore.

string=input("Enter a string\n")
cutoff=int(input("Enter a cutoff position(integer)\n"))
str_len=len(string)
cutstr1=""
cutstr2=""
for i in range(str_len):
    if(i<cutoff):
        cutstr1=cutstr1+string[i]
    else:
        cutstr2=cutstr2+string[i]
print("Cutoff Strings:\n", cutstr1,"   ", cutstr2)