#!/bin/bash
# Write a script that prints all those numbers that start with a '1',  in a list of numbers from 1 - 100.

echo  "Numbers that start with a '1', in a list of numbers from 1 - 100."
for((i=1;i<=100;i++))
{
	if ( [ $i -eq 1 ] || [ $(($i/10)) -eq 1 ] || [ $(($i/100)) -eq 1 ] )
	then
		echo -n $i" ";
	fi;
}
