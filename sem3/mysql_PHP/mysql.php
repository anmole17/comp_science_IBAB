<?php
$servername = "localhost";
$username = "root";
$password = "root@ROOT@123";

// Create connection
$connection = new mysqli($servername, $username, $password);


// Create database
$sqlQuery = "CREATE DATABASE v1";
$connection->query($sqlQuery);

//Create table t1 in database v1
$sqlQuery = "create table v1.t1(id integer, name varchar(40))";
$connection->query($sqlQuery);

//Insert values into table t1
$sqlQuery = "insert into v1.t1 values (1,\"peacock\"),(2,\"sparrow\"),(3,\"koel\"),(4,\"HummingBird\")";
$connection->query($sqlQuery);

//Create result set and display 
$sqlQuery="select * from v1.t1";
$result = $connection->query($sqlQuery);


$row=mysqli_fetch_all($result);
$cnt=count($row);

for($i=0;$i<$cnt;$i++)
{
	for($j=0;$j<$cnt-2;$j++)
	{
		echo $row[$i][$j]." ";
	}

		echo "<br>";
}
?>
