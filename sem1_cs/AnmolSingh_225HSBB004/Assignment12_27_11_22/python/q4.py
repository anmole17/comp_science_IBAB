#!/usr/bin/python3
# Sort a list of numbers in ascending and descending orders.

def enter_list():
    lst=list()
    for i in range(10):
        lst.append(int(input()))
        
    return lst

print("Enter list of 10 numbers:")
lst=enter_list()

for i in range(10):
    for j in range(10):
        if(lst[i]<lst[j]):
            temp=lst[i]
            lst[i]=lst[j]
            lst[j]=temp
        
print("Ascending order:\n",lst)

for i in range(10):
    for j in range(10):
        if(lst[i]>lst[j]):
            temp=lst[i]
            lst[i]=lst[j]
            lst[j]=temp
print("Descending order:\n",lst)