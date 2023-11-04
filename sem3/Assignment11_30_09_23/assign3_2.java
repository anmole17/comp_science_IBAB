import java.io.*;
import java.util.*;
import jakarta.servlet.*;
import jakarta.servlet.http.*;
import jakarta.servlet.annotation.*;

@WebServlet("/3assign2")

public class assign3_2 extends HttpServlet
{
	public void doGet(HttpServletRequest req1 , HttpServletResponse res1)throws IOException, ServletException
	{	String name1 = req1.getParameter("name1");
		String age = req1.getParameter("age");
		String name2 = req1.getParameter("name2");
		PrintWriter p1 =res1.getWriter();
		p1.println("<html><body>");
		p1.println("<h1>Concatenated Name is:"+(name1+name2)+" Age is: "+age+"</h1>");
		p1.println("</html></body>");
		
		
	}
};
