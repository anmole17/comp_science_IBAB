/*1.Write a normal java application to be run from command prompt . Create a vector of vectors. Let the inner vectors contain numbers and strings. Print the vector of vectors once. Then check how many 0s are present in the entire vector. Print the count.
Ex
V1 could be 
[[ 10,20,30,hi,hello],[ 1,2,3,ten0,eleven0],[]hello,hi,ibab,0,330]]

Total 0s will be 7.

2. Improvise(1) and send all required vector values from html form , process it all and display result using servlet*/
import java.io.*;
import java.util.*;
import jakarta.servlet.*;
import jakarta.servlet.http.*;
import jakarta.servlet.annotation.*;

@WebServlet("/assign2")

public class assignment2 extends HttpServlet
{
	public void doGet(HttpServletRequest req1 , HttpServletResponse res1)throws IOException, ServletException
{
PrintWriter p1 =res1.getWriter();
int st1, st2,i,j;
String[][] vec =new String[4][8];
vec[0]=req1.getParameter("vect1").split(" ");
vec[1]=req1.getParameter("vect2").split(" ");
vec[2]=req1.getParameter("vect3").split(" ");

Vector<Vector<String>> vect1 = new Vector<Vector<String>>();

int vec_length= vec.length;
for(i=0; i<vec_length-1;i++){
Vector<String> vect2 =new Vector<String>();
int vec_in_len=vec[i].length;
for(j=0;j<vec_in_len;j++){
vect2.add(vec[i][j]);
}
vect1.add(vect2);
}
p1.println("<html><body>");
p1.println("<h3>Vector created:</h3>");
p1.println(vect1);
String vect;
int len_v = vect1.size();
int zeros=0;
for(i=0; i<len_v;i++){
vect = vect1.get(i).toString();
int vect_len= vect.length();
for(j=0;j<vect_len;j++){
if(vect.charAt(j)=='0'){
zeros++;
}
}
}
p1.println("<h3>Number zero: </h3>"+zeros);
p1.println("</body></html>");
}
};
