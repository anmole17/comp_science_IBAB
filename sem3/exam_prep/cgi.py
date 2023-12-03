# comment
import cgi

form = cgi.FieldStorage()

num1=int(form.getvalue("num1"))
num2=int(form.getvalue("num2"))
# never print anything before Content-type : it gives error 
print("Content-type: text/html \n\n")
print("<html>")
print("<body>")
print("<h1>")
print("Multiplying: ", num1 ,"*", num2 ,"= ",(num1*num2))
print("</h1>")
print("</body>")
print("</html>")
