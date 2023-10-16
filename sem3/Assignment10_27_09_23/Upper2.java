import java.io.*;
import java.util.*;
import jakarta.servlet.*;
import jakarta.servlet.http.*;
import jakarta.servlet.annotation.*;

@WebServlet("/Upper2")

public class Upper2 extends HttpServlet
{
	public void doGet(HttpServletRequest req1 , HttpServletResponse res1)throws IOException, ServletException
	{
		String s1 = req1.getParameter("string");
		String upper=s1.toUpperCase();
		PrintWriter p1 =res1.getWriter();
		p1.println("Original "+ s1);
		p1.println("Uppercase "+ upper);
	}
};
//2.Write a program that takes a string in small letter and converts it into uppercase
