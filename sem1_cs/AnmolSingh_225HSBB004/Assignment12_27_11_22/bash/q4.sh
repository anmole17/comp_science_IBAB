#!/bin/bash

# Write a script that can print all even numbers between 1- 200.
echo "All the Even numbers from 1-200"
for((i=1;i<=200;i++))
{
	if [ $(($i%2)) -eq 0 ]
	then
		echo -n $i" ";
	fi;
}