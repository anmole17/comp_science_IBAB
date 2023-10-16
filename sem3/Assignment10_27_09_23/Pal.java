import java.io.*;
import java.util.*;
//import javax.servlet.*;
//import javax.servlet.http.*;
//import javax.servlet.annotation.*;

import jakarta.servlet.*;
import jakarta.servlet.http.*;
import jakarta.servlet.annotation.*;

@WebServlet("/Pal")

public class Pal extends HttpServlet
{
	public void doGet(HttpServletRequest req1 , HttpServletResponse res1)throws IOException, ServletException
	{
		String s1 = req1.getParameter("string");
		String palindrome="";
		int i;
		for(i=s1.length()-1;i>=0;i--)
		{
			palindrome +=s1.charAt(i);
		}
		PrintWriter p1 =res1.getWriter();
		p1.println("Original "+ s1);
		p1.println("Palindrome "+ palindrome);
	}
};
//1.Write a servlet that takes a string input and creates a pallidrome and prints the same 
