import java.util.*;
import java.io.*;
import java.sql.*;

class myApp
{
public static void main(String args[])
{
try
{
Class.forName("com.mysql.cj.jdbc.Driver");
Connection c1 = DriverManager.getConnection("jdbc:mysql://localhost:3306","root","root@ROOT@123");
Statement st1=c1.createStatement();
String query;
query="select * from v1.t1";
st1.execute(query);
}
catch(Exception e1){}
}
};
