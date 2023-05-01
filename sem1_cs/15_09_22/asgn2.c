#include<stdio.h>

int main()
{	
	int x; float y;
	printf("Enter 1 int, 1 float respectively:\n");
	scanf("%d %f",&x,&y);
	printf("Division of %d and %f: %f\n", x,y,(x/y));
	return(0);
}
