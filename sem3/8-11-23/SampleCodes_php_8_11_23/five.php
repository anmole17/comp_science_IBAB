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
