#!/usr/bin/python3

#Write a python code to compare two lists of numbers. If a common element is found, then print that
#element and its position in both the lists.

def enter_list():
    lst=list()
    for i in range(20):
        num=input()
        if (num==''):
          return lst
        num=(int)(num)
        lst.append(num)
        
    return lst
        


print("Enter first list of numbers, max 20 elements: Enter empty string when done")
list1=enter_list()


print("Enter second list of numbers, max 20 elements:Enter empty string when done")
list2=enter_list()

print("List 1:\n",list1)
print("List 2:\n",list2)
index1=0
for num1 in list1:
    index2=0
    for num2 in list2:
        if(num1==num2):
            print("Common elements:")
            print(num1," in Position: List1: ", index1," List2: ", index2)
        index2=index2+1
    index1=index1+1



