<%!
void f1(javax.servlet.jsp.JspWriter out2)
{
try
{
out2.println("Showcasing how to use out object in method <br>");
int i;
i=10;
out2.println("<br>");
out2.println(i);
}catch(Exception e1){}
}
%>

<%
f1(out);
%>
