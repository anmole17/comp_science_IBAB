import java.io.*;
import java.util.*;
import jakarta.servlet.*;
import jakarta.servlet.http.*;
import jakarta.servlet.annotation.*;

@WebServlet("/odddig")

public class odddig extends HttpServlet
{
	public void doGet(HttpServletRequest req1 , HttpServletResponse res1)throws IOException, ServletException
	{
		String s1 = req1.getParameter("num");
		int num = Integer.parseInt(s1);
		int len = s1.length();
		PrintWriter p1 =res1.getWriter();
		p1.println("Original "+ s1);
		p1.println("odd digits ");
		int i;
		for(i=0;i<len;i++){
		if(i%2==0){
		p1.print(s1.charAt(i));
		}
		}
	}
};
//3.Write a servlet that takes integer numbers as input and print the digits that are at the odd positions. (Eg: If number input is 12345, It should print 135)
