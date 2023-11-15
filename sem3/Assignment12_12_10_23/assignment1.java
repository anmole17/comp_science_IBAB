/*1) Write a servlet that takes important data for 6 students and process the same and put them in order (rank them) based on a key parameter.
The inputs to be given per students are 1)name 2)age 3)course 4) marks of 4 subjects.Rank is based on overall marks scored. Write an html form to submit this data.
*/
import java.io.*;
import java.util.*;
import jakarta.servlet.*;
import jakarta.servlet.http.*;
import jakarta.servlet.annotation.*;

@WebServlet("/assign1")

public class assignment1 extends HttpServlet
{
	public void doGet(HttpServletRequest req1 , HttpServletResponse res1)throws IOException, ServletException
{
PrintWriter p1 =res1.getWriter();
int st1, st2,i,j;
String[][] stdu =new String[7][8];
stdu[0]=req1.getParameter("st1").split(" ");
stdu[1]=req1.getParameter("st2").split(" ");
stdu[2]=req1.getParameter("st3").split(" ");
stdu[3]=req1.getParameter("st4").split(" ");
stdu[4]=req1.getParameter("st5").split(" ");
stdu[5]=req1.getParameter("st6").split(" ");
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
p1.println("<html><body>");
p1.println("Ranking according to Overall marks scored:");
p1.println("<table>");
p1.println("<tr>");
p1.println("<th>Rank</th><th>name</th><th>age</th><th>course</th><th>Subject1</th><th>Subject2</th><th>Subject3</th><th>Subject4</th></tr>");
for(i=0; i<6; i++){
p1.println("<tr><td>"+(i+1)+"</td>");
for(j=0; j<7;j++){
p1.println("<td>"+stdu[i][j] +"</td>");

}p1.println("</tr>");
}
p1.println("</table>");
p1.println("</body></html>");


}
}
