#! /bin/bash

for((i=1;i<=100;i++))
{
	if ([ $i -eq 1 ] || [ $((i/10)) -eq 1 ] || [$((i/100)) -eq 1 ])
	then
		echo "true";
	fi;
}
