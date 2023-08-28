#! /usr/bin/python3

import cgi

form = cgi.FieldStorage()

word1=form.getvalue("word1")
word2=form.getvalue("word2")
newword=""
l=len(word1)
l2=len(word2)
print("Content-type: text/html \n\n")
print("<html>")
print("<body>")
print("<h1>")
if(l!=l2):
    print("The words are not of equal length")
else:
    for i in range(0,l):
        newword= newword+word1[i]+word2[i]
    print("Merged string: ", newword)
print("</h1>")
print("</body>")
print("</html>")
