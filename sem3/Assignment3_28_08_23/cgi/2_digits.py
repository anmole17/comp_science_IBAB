#! /usr/bin/python3

import cgi

form = cgi.FieldStorage()

num1=int(form.getvalue("num1"))
digits=0
x=num1
digit=0
digit_list=list()
while(x>0):
    digit=x%10 
    x=int(x/10)
    digits=digits+1
    digit_list.append(digit)


print("Content-type: text/html \n\n")
print("<html>")
print("<body>")
print("<h1>")
print("Number of digits in ", num1," = ",digits)
print("</h1>")

for num in digit_list:
    if (num%2==0):
        print("<h1>")
        print("Digit: ", num," is even")
        print("</h1>")
    else:

        print("<h1>")
        print("Digit: ", num," is odd")
        print("</h1>")

print("</body>")
print("</html>")
