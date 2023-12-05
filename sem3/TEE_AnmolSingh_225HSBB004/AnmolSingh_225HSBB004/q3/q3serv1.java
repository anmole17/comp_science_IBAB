
import java.io.*;
import java.util.*;
import jakarta.servlet.*;
import jakarta.servlet.http.*;
import jakarta.servlet.annotation.*;


@WebServlet("/Q3_serv1")

public class q3serv1 extends HttpServlet
{	
	public void doGet(HttpServletRequest req1 , HttpServletResponse res1)throws IOException, ServletException
	{	PrintWriter p1 =res1.getWriter();
	String file = req1.getParameter("file");
	file= "/opt/tomcat/webapps/ROOT/"+file;
	String content = req1.getParameter("content");
	try{
		FileWriter fwr1 = new FileWriter(file);
		System.out.println("Enter 4 lines for 'input2':");
		fwr1.write(content);
		
		fwr1.close();}
	catch(Exception e){System.out.println(e);}
	p1.println("<html><body><h1>Content written</h1></body></html>");
}
};
