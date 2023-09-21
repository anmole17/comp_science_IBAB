//2. WAP to connect java to mysql and create a 2 database, and 2 tables per database. Insert values into the tables.

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

query = "create database d1;";

st1.execute(query);


query = "create database d2;";

st1.execute(query);

query = "create table d1.t1(id int, name varchar(40));";

st1.execute(query);

query = "create table d1.t2(id int, name varchar(40));";

st1.execute(query);

query = "create table d2.t1(id int, name varchar(40));";

st1.execute(query);

query = "create table d2.t2(id int, name varchar(40));";

st1.execute(query);

query = "insert into v1.t1 values (1,'Ajay'),(2, 'Xeom'),(3,'Gopi');";

st1.execute(query);


query = "insert into d1.t1 values (1,'Ajay'),(2, 'Xeom'),(3,'Gopi');";

st1.execute(query);
query = "insert into d1.t2 values (1,'Ajay'),(2, 'Xeom'),(3,'Gopi');";

st1.execute(query);
query = "insert into d2.t1 values (1,'Ajay'),(2, 'Xeom'),(3,'Gopi');";

st1.execute(query);
query = "insert into d2.t2 values (1,'Ajay'),(2, 'Xeom'),(3,'Gopi');";

st1.execute(query);

}
catch(Exception e){}
}
}

