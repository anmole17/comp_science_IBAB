#!/usr/bin/python3

import cgi;

form = cgi.FieldStorage();

num1=form.getvalue("num1");
num2=form.getvalue("num2");

num3=int(num1);
num4=int(num2);

print("Content-type: text/html \n\n");
print("<html>");
print("<body>");
print("<h1>");
print("The result of Adding ", num1 ,"and", num2 ,"is : ",(num3+num4));
print("</h1>");
print("</body>");
print("</html>");
