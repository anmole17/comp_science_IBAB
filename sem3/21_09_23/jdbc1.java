//1. Read from one.sql scrip and execute the commands using jdbc

import java.util.*;
import java.io.*;
import java.sql.*;

class App{
public static void main(String args[]){
try{
Class.forName("com.mysql.cj.jdbc.Driver");
Connection c1 = DriverManager.getConnection("jdbc:mysql://localhost:3306","root", "rootIbab@1");
Statement st1 = c1.createStatement();
String query;
FileReader rd1 = new FileReader("./one.sql");
BufferedReader bf1 = new BufferedReader(rd1);

while(bf1.ready()){
query = bf1.readLine();
st1.execute(query);
}

ResultSet rs1= st1.executeQuery("select * from plantA.indian;");
while(rs1.next()){
System.out.println(rs1.getString(1)+" "+rs1.getString(2)+" "+rs1.getString(3));
}

}
catch(Exception e){}
}
}

