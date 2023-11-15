<%--2) Write a JSP that takes important data for 6 students and process the same and put them in order (rank them) based on a key parameter.
The inputs to be given per students are 1)name 2)age 3)course 4) marks of 4 subjects.Rank is based on overall marks scored. Write an html form to submit this data.--%>
<%

int st1, st2,i,j;
String[][] stdu =new String[7][8];
stdu[0]=request.getParameter("st1").split(" ");
stdu[1]=request.getParameter("st2").split(" ");
stdu[2]=request.getParameter("st3").split(" ");
stdu[3]=request.getParameter("st4").split(" ");
stdu[4]=request.getParameter("st5").split(" ");
stdu[5]=request.getParameter("st6").split(" ");
String[] str1;
String[] str2;
String[] temp;

for(i=0; i<6; i++){
	for(j=i+1; j<6;j++){
		st1= Integer.parseInt(stdu[i][3])+Integer.parseInt(stdu[i][4])+Integer.parseInt(stdu[i][5])+Integer.parseInt(stdu[i][6]);
		st2= Integer.parseInt(stdu[j][3])+Integer.parseInt(stdu[j][4])+Integer.parseInt(stdu[j][5])+Integer.parseInt(stdu[j][6]);
		if (st1<st2){
			temp = stdu[i];
			stdu[i]=stdu[j];
			stdu[j]=temp;
		}
	}
}
out.println("<html><body>");
out.println("Ranking according to Overall marks scored:");
out.println("<table>");
out.println("<tr>");
out.println("<th>Rank</th><th>name</th><th>age</th><th>course</th><th>Subject1</th><th>Subject2</th><th>Subject3</th><th>Subject4</th></tr>");
for(i=0; i<6; i++){
out.println("<tr><td>"+(i+1)+"</td>");
for(j=0; j<7;j++){
out.println("<td>"+stdu[i][j] +"</td>");

}out.println("</tr>");
}
out.println("</table>");
out.println("</body></html>");

%>
