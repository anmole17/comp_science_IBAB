<%@page import="java.util.*,java.io.*" %>
<%-- This is to showcase using Vectors and FileHandling --%>
<%
Vector <Integer> v1 = new Vector<Integer>();
v1.add(10);v1.add(20);v1.add(30);
out.println(v1);

FileOutputStream f1= new FileOutputStream("out.txt");
String s1 = "I am in Bangalore";
byte [] b1 = s1.getBytes();
f1.write(b1);
f1.close();
%>
