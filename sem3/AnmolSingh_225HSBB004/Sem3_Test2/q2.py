#!/usr/bin/python3

import cgi

form = cgi.FieldStorage()

num1=form.getvalue("num1")
#num1="14 2 3 4 5 6 7 8 9 10 11 12 13 14 15"
numarr= [int(x) for x in num1.split(" ")]

for i in range(0, len(numarr)):
    for j in range(i+1, len(numarr)):
        if numarr[i] >= numarr[j]:
            temp = numarr[i]
            numarr[i] = numarr[j]
            numarr[j] = temp
sum=0
for i in numarr:
	sum=sum+i
mean= sum/len(numarr)

dict={}
for i in numarr:
	if i in dict:
		dict[i]=dict[i]+1
	else:
		dict[i]=1

mode=""
cnt=0;
for x in dict:
	if dict[x]>cnt:
		mode=x
		cnt=dict[x] 

oddsum=0;
for i in range(0,len(numarr),2):
	oddsum=oddsum+numarr[i]

evensum=0;
for i in range(1,len(numarr),2):
	evensum=evensum+numarr[i]

print("Content-type: text/html \n\n")
print("<html>")
print("<body>")
print("<h1>")
print("Range: ", numarr[0] ,"-", numarr[-1])
print("<br/>")
print("Mean: ", mean )
print("<br/>")
print("Median: ", numarr[7])
print("<br/>")
print("Mode: ", mode)
print("<br/>")
print("Sum even: ", evensum)
print("<br/>")
print("Sum odd: ", oddsum)
print("</h1>")
print("</body>")
print("</html>")
