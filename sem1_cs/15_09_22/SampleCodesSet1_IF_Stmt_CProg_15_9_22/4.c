#include <stdio.h>
#include <stdlib.h>
int f1()
{
	printf("Hello from f1() \n");
	exit(0);
}

int main()
{
	f1();
	printf("HEllo from main \n");
	return(0);
}
