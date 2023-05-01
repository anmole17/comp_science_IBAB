# /bin/usr/python3
#Write a python code to compare two lists of numbers. If a common element is found, then print that

lst1=list()
print("Enter first list(10 elements):")
for i in range(10):
    lst1.append((int)(input()))

lst2=list()
print("Enter second list(10 elements):")
for i in range(10):
    lst2.append((int)(input()))

for i in range(10):
    for j in range(10):
        if(lst1[i]==lst2[j]):
            print(lst1[i]," is common at positions: List 1: ",i," List 2: ",j)


