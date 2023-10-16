<%
out.println("<form method='get' action='js2.jsp'>");
int i;
for(i=1; i<=12;i++){
String query;
query= "<div><label> Enter Number "+i+"<input name='num"+i+"'></label></div>"; 
out.println(query);
}
out.println("<input type='submit' value='Display'>");
out.println("</form>");
%>
