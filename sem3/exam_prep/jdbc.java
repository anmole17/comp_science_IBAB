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
query = "create database LandAnimals;";
st1.execute(query);
query = "create database SeaAnimals;";
st1.execute(query);
query = "create table LandAnimals.predator(id int, name varchar(40), size varchar(40), habitat varchar(40));";
st1.execute(query);
query = "create table LandAnimals.prey(id int, name varchar(40), size varchar(40), habitat varchar(40));";
st1.execute(query);
query = "create table SeaAnimals.predator(id int, name varchar(40), size varchar(40), habitat varchar(40));";
st1.execute(query);
query = "create table SeaAnimals.prey(id int, name varchar(40), size varchar(40), habitat varchar(40));";
st1.execute(query);

query = "insert into SeaAnimals.prey values (1,'Turtles','Medium','sea and fresh water'),(2,'Seals','Medium','Artic and Antartic'),(3,'sardines','Small','Near costal area');";
st1.execute(query);
query = "insert into SeaAnimals.predator values (4,'Polar Bear','Medium','Arctic Circle'),(5,'Bull Shark','Medium/Large','shallow waters near coast'),(6,'Tiger Shark','large','tropical and temperate waters');";
st1.execute(query);

query = "insert into LandAnimals.prey values (1,'Turtles','Medium','sea and fresh water'),(7,'Deer','Medium','forests'),(8,'Rabbits','small','burrows');";
st1.execute(query);
query = "insert into LandAnimals.predator values (4,'Polar Bear','Medium','Arctic Circle'),(8,'Lions','Medium','Forests, grasslands'),(9,'Wolf','Medium','Forests, grasslands');";
st1.execute(query);
// run from.sql
/// FileReader rd1 = new FileReader("./one.sql");
//BufferedReader bf1 = new BufferedReader(rd1);

//while(bf1.ready()){
//query = bf1.readLine();
//st1.execute(query);
//}

//SELECT * FROM LandAnimals.prey INNER JOIN SeaAnimals.prey ON LandAnimals.prey.id = SeaAnimals.prey.id;
ResultSet rs1= st1.executeQuery("SELECT * FROM LandAnimals.prey INNER JOIN SeaAnimals.prey ON LandAnimals.prey.id = SeaAnimals.prey.id;");
System.out.println("Common Prey based on ID:");
while(rs1.next())
{
System.out.println("Id "+rs1.getString(1)+"||Name "+rs1.getString(2)+"||Size "+rs1.getString(3)+"||Habitat "+rs1.getString(4));
}

//SELECT * FROM LandAnimals.predator INNER JOIN SeaAnimals.predator ON LandAnimals.predator.id = SeaAnimals.predator.id
rs1= st1.executeQuery("SELECT * FROM LandAnimals.predator INNER JOIN SeaAnimals.predator ON LandAnimals.predator.id = SeaAnimals.predator.id");
System.out.println("Common Predator based on ID:");
while(rs1.next())
{
System.out.println("Id "+rs1.getString(1)+"||Name "+rs1.getString(2)+"||Size "+rs1.getString(3)+"||Habitat "+rs1.getString(4));
}

}
catch(Exception e){}
}
}
