/*
*/
import java.sql.*;
import java.io.*;
import java.util.*;
import jakarta.servlet.*;
import jakarta.servlet.http.*;
import jakarta.servlet.annotation.*;


@WebServlet("/servJDBC")

public class servJDBC1 extends HttpServlet
{
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
		
		try{
		Class.forName("com.mysql.cj.jdbc.Driver");

		Connection c1 = DriverManager.getConnection("jdbc:mysql://localhost:3306","root", "rootIbab@1");
		Statement st1 = c1.createStatement();
		String query;

		// run from.sql
		/// FileReader rd1 = new FileReader("./one.sql");
		//BufferedReader bf1 = new BufferedReader(rd1);

		//while(bf1.ready()){
		//query = bf1.readLine();
		//st1.execute(query);
		//}
		
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
};



