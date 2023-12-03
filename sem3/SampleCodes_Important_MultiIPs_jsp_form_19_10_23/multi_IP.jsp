
<%
int i,num;
String s1 = request.getParameter("n1");
String [] s2 = s1.split(" ");
out.println("The number of Elements entered:"+s2.length+"<br>");
out.println("The Square of each element is given below:<br>");
for(i=0;i<s2.length;i++)
{
num=Integer.parseInt(s2[i]);
out.println(num*num);
}
%>
