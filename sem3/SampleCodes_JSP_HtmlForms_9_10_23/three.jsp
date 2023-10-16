<html>
<body>
<h1>
<%! int cb(int n1)
{
return(n1 * n1 * n1);
}
%>
<% String s1=request.getParameter("name1");
int num = Integer.parseInt(s1);
int res=cb(num);
%>
<%= res  %>
</h1>
</body>
</html>
