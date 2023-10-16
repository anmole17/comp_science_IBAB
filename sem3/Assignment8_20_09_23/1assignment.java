//1. WAP to connect java to mysql and create a database, and table. Insert Values into the table.
import java.util.*;
import java.io.*;
import java.sql.*;

class App
{
public static void main(String args[]){
try{
Class.forName("com.mysql.cj.jdbc.Driver");

Connection c1 = DriverManager.getConnection("jdbc:mysql://localhost:3306","root", "rootIbab@1");

Statement st1 = c1.createStatement();

String query;

query = "create database v1;";

st1.execute(query);

query = "create table v1.t1(id int, name varchar(40));";

st1.execute(query);

query = "insert into v1.t1 values (1,'Ajay'),(2, 'Xeom'),(3,'Gopi');";

st1.execute(query);

}
catch(Exception e){}
}
}

