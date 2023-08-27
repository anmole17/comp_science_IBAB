#!/usr/bin/python3

import cgi

form = cgi.FieldStorage()

name=form.getvalue("name1")

print("Content-type: text/html \n\n")
print("<html>")
print("<body>")
print("<h1>")
print("Reversed: ",name[::-1])
print("</h1>")
print("</body>")
print("</html>")
