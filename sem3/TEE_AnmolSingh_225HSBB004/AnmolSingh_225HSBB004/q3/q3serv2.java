import java.io.*;
import java.util.*;
import jakarta.servlet.*;
import jakarta.servlet.http.*;
import jakarta.servlet.annotation.*;


@WebServlet("/Q3_serv2")

public class q3serv2 extends HttpServlet
{	
	public void doGet(HttpServletRequest req1 , HttpServletResponse res1)throws IOException, ServletException
	{	PrintWriter p1 =res1.getWriter();
	int i;
	String file = req1.getParameter("file");
	file= "/opt/tomcat/webapps/ROOT/"+file;
	try{
		FileInputStream fis1 = new FileInputStream(file);
		p1.println("<html><body><h1>Content of file</h1><p>");
		while((i=fis1.read())!=-1)
	{
		p1.print((char)i);
	}
	p1.println("</p></body></html>");
	fis1.close();}
	catch(Exception e){System.out.println(e);}
}
};
