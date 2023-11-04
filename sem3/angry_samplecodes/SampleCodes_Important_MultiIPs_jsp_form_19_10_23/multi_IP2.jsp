<html><body><p><h3>
<%
int i,j,num;
String s1 = request.getParameter("st1");
String s2 = request.getParameter("st2");
String s3 = request.getParameter("st3");
String s4 = request.getParameter("st4");
String s5 = request.getParameter("st5");
out.println("The Elements entered are: <br>");
String [] s6 = s1.split(" ");
for(i=0;i<s6.length;i++)
{
out.println(s6[i]);
}
out.print("<br>");

String [] s7 = s2.split(" ");
for(i=0;i<s7.length;i++)
{
out.println(s7[i]);
}

out.print("<br>");
String [] s8 = s3.split(" ");
for(i=0;i<s8.length;i++)
{
out.println(s8[i]);
}

out.print("<br>");
String [] s9 = s4.split(" ");
for(i=0;i<s9.length;i++)
{
out.println(s9[i]);
}

out.print("<br>");
String [] s10 = s5.split(" ");
for(i=0;i<s10.length;i++)
{
out.println(s10[i]);
}


%>
</h1></p></body></html>
