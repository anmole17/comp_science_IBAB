#! /usr/bin/python3

import cgi

form = cgi.FieldStorage()

name1=form.getvalue("name1")
name2=form.getvalue("name2")
name1=name1.lower()
name2=name2.lower()
common=list()
for letter1 in name1:
    for letter2 in name2:
        if (letter1==letter2):
            if letter1 not in common:
                common.append(letter1)
print("Content-type: text/html \n\n")
print("<html>")
print("<body>")
print("<h1>")
print("Common letters in", name1," and ", name2)
print(common)
print("</h1>")
print("</body>")
print("</html>")