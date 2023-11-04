/*
3. Design an html form, that takes name and age of a person. Now, write a servlet that takes this input and displays
both the name and age. The same servlet, will also display another form, along with this result. This form is created
by Servlet (BAsically the result display page will also have provision to enter some more data). Using this form, enter
another name. When submitted , another servlet takes this input along with the name and age submitted from first
form (this is the catch!!!0 and displays concatenated name along with age. 
Note: Whatever you know about string, string manipulation and servlet till today, is more than enough to achieve this.
Have attached some screenshots that tells you the expected output.
In the zip file, first go through README.txt and follow instructions as per that.

This assignemnt has 3assign.html,  assign3.java and assign3_2.java
*/

import java.io.*;
import java.util.*;
import jakarta.servlet.*;
import jakarta.servlet.http.*;
import jakarta.servlet.annotation.*;

@WebServlet("/3assign")

public class assign3 extends HttpServlet
{
	public void doGet(HttpServletRequest req1 , HttpServletResponse res1)throws IOException, ServletException
	{	String name1 = req1.getParameter("name1");
		String age = req1.getParameter("age");
		PrintWriter p1 =res1.getWriter();
		p1.println("<form method='get' action='/myAPP/3assign2'>");
		p1.println("<label> Name:<input type='text' id='name1' name='name1' value="+name1+" readonly>");
		p1.println("<label> Age:<input type='text' id='age' name='age' value="+age+" readonly>");
		
		p1.println("<div><label> Enter Surname: <input name='name2'></label></div>");
		p1.println("<input type='submit' value='Concatenate name'>");
		p1.println("</form>");
		
		
	}
};
