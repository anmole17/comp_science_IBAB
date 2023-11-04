//2. Take input of what database name and table to create and create them using jdbc.


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
Scanner sc=new Scanner(System.in); 
System.out.println("Enter database name:");
String db = sc.nextLine();
System.out.println("Enter table name:");
String tb = sc.nextLine();

query = "create database "+ db +";";
st1.execute(query);
query = "create table "+db+"."+tb+"(id int, name varchar(40));";
st1.execute(query);

}
catch(Exception e){System.out.println(e);}
}
}

