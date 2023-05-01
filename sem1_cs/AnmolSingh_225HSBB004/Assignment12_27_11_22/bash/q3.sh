#!/bin/bash
#Write a script that prints the Fibonacci series for n terms. You need to give 'n' as input.

function fibonacci(){
a=0;
b=1;
echo "Fibonacci series for" $n "terms:"
for((i=0; i<n; i++))
{
	c=$b
	b=$(($a+$b))
	echo -n $a" "
	a=$c
}
}

echo "Enter the number of terms for Fibonacci series"
read n
fibonacci $n