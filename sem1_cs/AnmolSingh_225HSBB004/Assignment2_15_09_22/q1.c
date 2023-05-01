/*Write a program which takes 2 integer parameters  say x and y, and calculates x/y (division).
print the results. */
#include<stdio.h>

int main()
{	
	int x,y;
	printf("Enter 2 integers:\n");
	scanf("%d %d",&x,&y);
	printf("Division of %d and %d: %d\n", x,y,(x/y));
	return(0);
}
