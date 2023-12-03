import java.io.*;
import java.util.*;
import jakarta.servlet.*;
import jakarta.servlet.http.*;
import jakarta.servlet.annotation.*;

@WebServlet("/chain")

public class first_servlet extends HttpServlet
{
	public void doGet(HttpServletRequest req1 , HttpServletResponse res1)throws IOException, ServletException
	{
		PrintWriter p1 =res1.getWriter();
		p1.println("<form method='get' action='/myAPP/chain2'>");
		int i;
		for(i=1; i<=12;i++){
		String query;
		query= "<div><label> Enter Number "+i+"<input name='num"+i+"'></label></div>"; 
		//p1.println("<label> Name:<input type='text' id='name1' name='name1' value="+name1+" readonly>");
		p1.println(query);
		}
		p1.println("<input type='submit' value='Display'>");
		p1.println("</form>");
		
		
	}
};
