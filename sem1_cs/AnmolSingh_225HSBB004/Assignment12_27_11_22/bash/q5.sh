#!/bin/bash
# Write a script that takes two numbers, and prints the common digits in the numbers.

echo "Enter two numbers"
read num1
read num2


while [ $num1 -gt 0 ]
do
digits1[n]=$(($num1%10));
n=$(($n+1));
num1=$(($num1/10));
done

while [ $num2 -gt 0 ]
do
digits2[m]=$(($num2%10))
m=$(($m+1))
num2=$(($num2/10))
done

echo "Common digits:"
for ((i=0; i<n; i++))
{
    for ((j=0; j<m; j++))
    {
        if [ $((digits1[$i])) -eq $((digits2[$j])) ]
        then
        echo -n $((digits1[$i]))
        fi;
    
}   
}