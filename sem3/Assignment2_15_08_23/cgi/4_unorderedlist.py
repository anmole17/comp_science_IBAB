#!/usr/bin/python3

import cgi

form = cgi.FieldStorage()

name1=form.getvalue("name1")
name2=form.getvalue("name2")
name3=form.getvalue("name3")

print("Content-type: text/html \n\n")
print("<html>")
print("<body>")
print("<ul>")
print("<li>",name1,"</li>")
print("<li>",name2,"</li>")
print("<li>",name3,"</li>")
print("</ul>")
print("</body>")
print("</html>")