#!/usr/bin/python3

#  Write a python code in which a list contains 3 other lists. Each of the lists can have data of different types.

def enter_list():
    lst=list()
    for i in range(20):
        inp=input()
        if (inp==''):
          return lst
        if(inp.isnumeric()):
            lst.append(int(inp))
        else: 
            lst.append(inp)
    return lst

def append_lst(lst1,lst2,lst3):
    lst=list()
    lst.append(lst1)
    lst.append(lst2)
    lst.append(lst3)
    return lst


print("Enter first list, max 20 elements: Enter empty string when done")
list1=enter_list()

print("Enter second list, max 20 elements:Enter empty string when done")
list2=enter_list()

print("Enter third list, max 20 elements:Enter empty string when done")
list3=enter_list()

finallst=append_lst(list1,list2,list3)

print("Final list:\n",finallst)
