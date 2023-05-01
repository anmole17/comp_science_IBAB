# /bin/python3
# Write a python code in which a list contains 3 other lists. Each of the lists can have data of different types.

def entrlst():
    lst=[]
    for i in range(10):
        a=input()
        if (a==""):
            break
        else:
            lst.append(a)
    return lst

lst=list()
for i in range(3):
    print("Enter a list")
    lst.append(list(entrlst()))

print("Final list of lists:\n", lst)


