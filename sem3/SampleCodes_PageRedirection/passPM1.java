import java.io.*;
import java.util.*;
import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
@WebServlet("/passPM1")

public class passPM1 extends HttpServlet
 {
 public void doGet(HttpServletRequest request,HttpServletResponse response)
   throws ServletException, IOException {
String n1 = request.getParameter("num1");
String n2 = request.getParameter("num2");
int num1 = Integer.parseInt(n1);
int num2 = Integer.parseInt(n2);
   PrintWriter out = response.getWriter();
   out.println("<HTML>");
   out.println("<BODY>");
   out.println("<h1>  First Number is " + num1 + "<br/>");
   out.println("Second Number is " + num2 + "<br/> </h1>");
   int add_res=num1+num2;
   int sub_res=num1-num2;
   String num_1 = Integer.toString(add_res);
   String num_2 = Integer.toString(sub_res);
request.getSession().setAttribute("num1",num_1);
request.getSession().setAttribute("num2",num_2);
   out.println("<h1>Result of Addition is: " + add_res + "<br/>");
   out.println("Result of Subtraction is " + sub_res + "<br/> </h1>");
   out.println("</BODY>");
   out.println("</HTML>");
   
   String newLink = "/myApps/passPM2";
   response.sendRedirect(newLink);
				      }
}
