#!/usr/bin/python3

import cgi;

form = cgi.FieldStorage();

num1=form.getvalue("num1");
num2=form.getvalue("num2");
print("Content-type: text/html \n\n");
print("<html>");
print("<body>");
print("<h1>");
print(num1+num2);
print("</h1>");
print("</body>");
print("</html>");
