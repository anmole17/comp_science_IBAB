#!/usr/bin/python3
# Write a script that reverses two tuples and then merges the same. Each tuple has at least 8 integers.

def enter_tuple():
    lst=list()
    for i in range(20):
        num=input()
        if (num==''):
            if(i<8):
                print("Enter more elements, it is less than 8, enter empty string to exit program")
                while(num==''):
                    num=input()
                    if(num==''):
                        exit()
            else:
                return tuple(lst)
        if (num!=''):
            num=(int)(num)
        lst.append(num)
        
    return tuple(lst)

def rev_tuple(tpl):
    lst=list()
    for num in tpl:
        lst.insert(0,num)
    tpl=tuple(lst)
    return tpl

def comb_tpl(tpl1,tpl2):
    lst=list()
    for num in tpl1:
        lst.append(num)
    for num in tpl2:
        lst.append(num)
    
    return tuple(lst)

print("Enter first tuple of numbers, atleast 8, max 20 elements: Enter empty string when done")
tupl1=enter_tuple()

print("Enter second tuple of numbers, atleast 8, max 20 elements: Enter empty string when done")
tupl2=enter_tuple()

print("Tuple 1:\n", tupl1)
print("Tuple 2:\n", tupl2)

tupl1=rev_tuple(tupl1)
print("Tuple 1 Reversed:\n", tupl1)

tupl2=rev_tuple(tupl2)
print("Tuple 2 Reversed:\n", tupl2)

cmb_tpl= comb_tpl(tupl1,tupl2)
print("Combined reverse tuple:\n", cmb_tpl)




