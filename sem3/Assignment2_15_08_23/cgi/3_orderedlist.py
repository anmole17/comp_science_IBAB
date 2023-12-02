#!/usr/bin/python3

import cgi

form = cgi.FieldStorage()

#name1=form.getvalue("name1")
#name2=form.getvalue("name2")
#name3=form.getvalue("name3")
names=list()

for i in range(1,4):
	para="name"+str(i)
	names.append(form.getvalue(para))

print("Content-type: text/html \n\n")
print("<html>")
print("<body>")
print("<ol>")
for name in names: 
	print("<li>",name,"</li>")

#print("<li>",name1,"</li>")
#print("<li>",name2,"</li>")
#print("<li>",name3,"</li>")
print("</ol>")
print("</body>")
print("</html>")
