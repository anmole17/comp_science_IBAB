import java.io.*;
import java.util.*;
import java.io.IOException;
import java.io.PrintWriter;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
@WebServlet("/passPM2")

public class passPM2 extends HttpServlet
 {
 public void doGet(HttpServletRequest request,HttpServletResponse response)
   throws ServletException, IOException {
String n1 = (String)request.getSession().getAttribute("num1");
String n2 = (String)request.getSession().getAttribute("num2");
int num1 = Integer.parseInt(n1);
int num2 = Integer.parseInt(n2);
   PrintWriter out = response.getWriter();
   out.println("<HTML>");
   out.println("<BODY>");
   out.println("<h1>  First Number is " + num1 + "<br/>");
   out.println("Second Number is " + num2 + "<br/> </h1>");
   out.println("</BODY>");
   out.println("</HTML>");
				      }
}
