#! /usr/bin/python3

import cgi

form = cgi.FieldStorage()

num1=int(form.getvalue("num1"))
num2=int(form.getvalue("num2"))

print("Content-type: text/html \n\n")
print("<html>")
print("<body>")
print("<h1>")
print("Adding: ", num1 ,"+", num2 ," = ",(num1+num2))
print("Substracting: ", num1 ,"-", num2 ," = ",(num1-num2))
print("Dividing: ", num1 ,"/", num2 ,"= ",(num1/num2))
print("Multiplying: ", num1 ,"*", num2 ,"= ",(num1*num2))
print("</h1>")
print("</body>")
print("</html>")
