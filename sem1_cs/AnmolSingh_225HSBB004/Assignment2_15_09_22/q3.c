/* Improvise 2, where you store the result of division in a variable and display the same.*/
#include<stdio.h>

int main()
{	
	int x; float y,z;
	printf("Enter 1 int, 1 float respectively:\n");
	scanf("%d %f",&x,&y);
	z=(x/y); 
	printf("Division of %d and %f: %f\n", x,y,z);
	return(0);
}
