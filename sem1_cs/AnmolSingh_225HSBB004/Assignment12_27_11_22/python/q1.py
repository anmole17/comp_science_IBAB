#!/usr/bin/python3
# Write a python code to check if a given number is prime number or not.

def prime_no(num):
        if(num==2):
                print("It is a prime number")
                return (0)
        elif(num==3):
                print("It is a prime number")
                return (0)
        if(num%2==0):
                print("Not a prime number")
                return (0)
        else:
                for i in range(3,((int)(num+1/2)),2):
                        if(num%i==0):
                                print("Not a prime number")
                                return (0)
        print("It is a prime number")
        return (0)
i=1
while(i!=0):
        num=(int)(input("Enter a number:\n"))
        prime_no(num)
        i=input("Press any character to continue. To exit enter 0 \n")
