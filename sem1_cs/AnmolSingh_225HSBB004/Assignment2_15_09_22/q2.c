/*Improvise q1 , where you take one parameter as int and another as float. Calculate x/y and
print the results. (Either numerator or denominator can be a float).*/
#include<stdio.h>

int main()
{	
	int x; float y;
	printf("Enter 1 int, 1 float respectively:\n");
	scanf("%d %f",&x,&y);
	printf("Division of %d and %f: %f\n", x,y,(x/y));
	return(0);
}
