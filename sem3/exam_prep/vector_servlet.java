/**/
import java.io.*;
import java.util.*;
import jakarta.servlet.*;
import jakarta.servlet.http.*;
import jakarta.servlet.annotation.*;

@WebServlet("/qestion")

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
//Integer.parseInt();
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
//System.out.println("Present or not?:");
//        if(vec.indexOf(val)!=-1){
//		System.out.println("Yes");
//        }
//        else{
//            System.out.println("No");      
//        }

}
}
p1.println("<h3>Number zero: </h3>"+zeros);
p1.println("</body></html>");
}
};
