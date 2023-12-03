<%
String s1=request.getParameter("bi1");
String s2=request.getParameter("bi2");
String s3=request.getParameter("de1");
int de1=Integer.parseInt(s3);
int bi1= Integer.parseInt(s1,2);
int bi2= Integer.parseInt(s2,2);
int largest=0;
if(bi1>=bi2){largest=bi1;}
else{largest=bi2;}
if(de1>largest){largest=de1;}
out.println("<html><body>");
out.println("<h1>");
out.println("Original numbers: "+ s1+", "+s2+", "+s3);
out.println("</h1>");
out.println("<h1>");
out.println("Largest Number: "+largest);
out.println("</h1>");
out.println("<h1>");
out.println("Sum: "+(bi1+bi2+de1));
out.println("</h1></body></html>");
%>
