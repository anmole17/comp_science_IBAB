<form action="one.php">
<div><label> Enter Name: <input type="text" name="name1"></label></div>
<input type="submit" value="display">
</form> 
<?php

$name=$_GET["name1"];
echo $name;
?>

================================================
both in one
<?php

$name=$_GET["name1"];
echo $name;
?>

<form action=" ">
<div><label> Enter Name: <input type="text" name="name1"></label></div>
<input type="submit" value="display">
</form>

========================================
<form method="post" action=" ">
<div><label> Enter Name: <input type="text" name="name1"></label></div>
<input type="submit" value="display">
</form>

<?php

$name=$_POST["name1"];
echo $name;
print_r($name);
print($name);
printf($name);
?>
======================================
<?php
$arr1=array("1"=>"Ven","2"=>"ibab","3"=>"blore");
foreach($arr1 as $x => $y)
{
	echo $x.$y."<br>";
}
print_r($name);
print($name);
printf($name);
?>
=======================================
<?php
$st1="I,am,in,Bangalore,now";
$arr1=explode(",",$st1);
$cnt=count($arr1);
echo $cnt."<br>";
for($i=0;$i<$cnt;$i++)
{
	echo $arr1[$i]."<br>";
}
?>
