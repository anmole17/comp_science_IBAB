import java.io.*;
import java.util.*;
import jakarta.servlet.*;
import jakarta.servlet.http.*;
import jakarta.servlet.annotation.*;

@WebServlet("/q1")

public class q1 extends HttpServlet
{
	public void doGet(HttpServletRequest req1 , HttpServletResponse res1)throws IOException, ServletException
{
int i;

String str1 = req1.getParameter("str1");
String str2 = req1.getParameter("str2");
String str3 = req1.getParameter("str3");
Vector<Character> v1= new Vector<Character>(); 
PrintWriter p1 =res1.getWriter();
for (i = 0; i < str1.length(); i++)
{
char chr = str1.charAt(i);
if (str2.indexOf(chr)!=-1 && str3.indexOf(chr)!=-1) {
v1.add(chr);
}
}
p1.println("<html><body>");
if(v1.size()!=0){
for (i = 0; i < v1.size(); i++)
{
p1.println("<h1>");
p1.println("Character:"+v1.get(i));
p1.println("</h1>");

p1.println("<h2>");
p1.println("Position in string:");
p1.println("</h2>");

p1.println("<h2>");
p1.println("String1:"+str1.indexOf(v1.get(i)));
p1.println("</h2>");

p1.println("<h2>");
p1.println("String2:"+str2.indexOf(v1.get(i)));
p1.println("</h2>");

p1.println("<h2>");
p1.println("String3:"+str3.indexOf(v1.get(i)));
p1.println("</h2>");
}
}
else{
p1.println("<h1>");
p1.println("No Common Character Found");
p1.println("</h1>");
}
String file= "";
try{
FileInputStream fis=new FileInputStream("/opt/tomcat/webapps/myAPP/src/q1.txt");
i=0;    
while((i=fis.read())!=-1){    
file=file+Character.toString((char)i);    
}
fis.close();
}catch(Exception e){p1.println(e);}    

p1.println("<h1> Occurance in file:</h1>");
p1.println("<h2> String1: ");
p1.println(file.split(str1, -1).length-1);
p1.println("</h2>");

p1.println("<h2>String2: ");
p1.println(file.split(str2, -1).length-1);
p1.println("</h2>");

p1.println("<h2> String3: ");
p1.println(file.split(str3, -1).length-1);
p1.println("</h2>");
p1.println("</body></html>");

}
};
