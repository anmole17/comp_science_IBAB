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
