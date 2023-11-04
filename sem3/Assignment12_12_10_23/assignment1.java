/*1) Write a servlet that takes important data for 6 students and process the same and put them in order (rank them) based on a key parameter.
The inputs to be given per students are 1)name 2)age 3)course 4) marks of 4 subjects.Rank is based on overall marks scored. Write an html form to submit this data.
*/

import java.sql.*;
import java.io.*;
import java.util.*;
import jakata.servlet.*;
import jakata.servlet.http.*;
import jakata.servlet.annotation.*;

@WebServlet("/assign1")

public class assignment1 extends HttpServlet
{
public void doGet(HttpServletReqiest req1, HttpServletResponse res1)throws IOException, ServletException
{
String st1 = req1.getParameter("st1");
String st2 = req1.getParameter("st2");
String st3 = req1.getParameter("st3");
String st4 = req1.getParameter("st4");
String st5 = req1.getParameter("st5");
String st6 = req1.getParameter("st6");
String [] starr1 = st1.split(" ");
String [] starr2 = st2.split(" ");
String [] starr3 = st3.split(" ");
String [] starr4 = st4.split(" ");
String [] starr5 = st5.split(" ");
String [] starr6 = st6.split(" ");

Vector students = new Vector();

String
}

}
