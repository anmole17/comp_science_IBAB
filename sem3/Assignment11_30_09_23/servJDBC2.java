/*
1. Write a Servlet in which you take input about Database name, Table name and Values to be stored in the table.
For now, create only one database, with a single table. Let the table contain id and name as content. Store 3 sets
of values in it. Use JDBC code as part of doGet() method of servlet and implement this.

2. Improvise by having a separate method that does JDBC work and call this method from doGet() method of
servlet. Note down any challenges you face.
*/
import java.sql.*;
import java.io.*;
import java.util.*;
import jakarta.servlet.*;
import jakarta.servlet.http.*;
import jakarta.servlet.annotation.*;


@WebServlet("/servJDBC2")

public class servJDBC2 extends HttpServlet
{	void jdbc(String db,String tb,int id1, int id2, int id3,String name1,String name2,String name3, PrintWriter p1)
{
		
		try{
		Class.forName("com.mysql.cj.jdbc.Driver");

		Connection c1 = DriverManager.getConnection("jdbc:mysql://localhost:3306","root", "rootIbab@1");
		Statement st1 = c1.createStatement();
		String query;
		query = "create database "+ db +";";
		st1.execute(query);
		
		query = "create table "+db+"."+tb+"(id int, name varchar(40));";
		st1.execute(query);
		query = "insert into "+db+"."+tb+" values ("+id1+",'"+name1+"'),("+id2+",'"+name2+"'),("+id3+",'"+name3+"');";
		st1.execute(query);
		p1.println("<html><body><table><tr><th>ID</th><th>Name</th></tr>");
		
		ResultSet rs1= st1.executeQuery("select * from "+db+"."+tb+";");
		while(rs1.next())
		{
		p1.println("<tr><td>"+rs1.getString(1)+"</td><td>"+rs1.getString(2)+"</td></tr>");
		}
		p1.println("</table></body></html>");
		}
		catch(Exception e){p1.println(e);}

	}
	public void doGet(HttpServletRequest req1 , HttpServletResponse res1)throws IOException, ServletException
	{
		String db = req1.getParameter("db");
		String tb = req1.getParameter("tb");
		String sid1 = req1.getParameter("id1");
		String name1 = req1.getParameter("name1");
		String sid2 = req1.getParameter("id2");
		String name2 = req1.getParameter("name2");
		String sid3 = req1.getParameter("id3");
		String name3 = req1.getParameter("name3");
		int id1 = Integer.parseInt(sid1);
		int id2 = Integer.parseInt(sid2);
		int id3 = Integer.parseInt(sid3);
		PrintWriter p1 =res1.getWriter();
		jdbc(db,tb,id1,id2,id3,name1,name2,name3, p1);
		
	}
};

/*
<div><label> Table name: <input name="tb"></label></div>
<div><label> The table will have int id and char name- stores 3 sets of values </label></div>
<div><label> ID 1: <input name="id1"></label></div>
<div><label> Name 1: <input name="name1"></label></div>
<div><label> ID 2: <input name="id2"></label></div>
<div><label> Name 2: <input name="name2"></label></div>
<div><label> ID 3: <input name="id3"></label></div>
<div><label> Name 3: <input name="name3"></label></div>

*/

