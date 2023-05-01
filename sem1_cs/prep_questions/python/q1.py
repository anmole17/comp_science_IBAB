#! /usr/bin/python3

num=(int)(input("Enter a number:\n"))


def prime_no(num):
    if(num%2==0):
        if(num==2):
            print("It is a prime number")
            return (0)
        else: 
            print("Not a prime number")
            return (0)
    else:
        for i in range(1,(int)(num/2),2):
            if(num%i==0 & i!=1):
                print("Not a prime number")
                return (0)
            else:
                print("It is a prime number")
                return (0)

prime_no(num)

