#! /usr/bin/python3

import cgi

form = cgi.FieldStorage()

num1=int(form.getvalue("num1"))
digits=0
x=num1 # to count the digit, see how many times it can be divided by 10 before becoming 0
while(x!=0):
    x=int(x/10)
    digits=digits+1

print("Content-type: text/html \n\n")
print("<html>")
print("<body>")
print("<h1>")
print("Number of digits in ", num1," = ",digits)
print("</h1>")
print("</body>")
print("</html>")
