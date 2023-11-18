#!/usr/bin/python3

import cgi

form = cgi.FieldStorage()

name=form.getvalue("name1")

print("Content-type: text/html \n\n")
print("<html>")
print("<body>")
print("<h1>")
print("Reversed: ",name[::-1]) # this type of indexing can be sued to reverse a string
print("</h1>")
print("</body>")
print("</html>")
