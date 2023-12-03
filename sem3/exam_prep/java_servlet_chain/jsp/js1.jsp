<%
out.println("<form method='get' action='js2.jsp'>");
int i;
for(i=1; i<=12;i++){
String query;
//p1.println("<label> Name:<input type='text' id='name1' name='name1' value="+name1+" readonly>");
query= "<div><label> Enter Number "+i+"<input name='num"+i+"'></label></div>"; 
out.println(query);
}
out.println("<input type='submit' value='Display'>");
out.println("</form>");
%>
