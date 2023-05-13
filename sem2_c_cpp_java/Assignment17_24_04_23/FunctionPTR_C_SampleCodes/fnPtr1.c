#include<stdio.h>

int f1()
{
	printf("Hello\n");
	return(0);
}

int main()
{
	int (*fptr)();
	fptr=&f1;
	(*fptr)();
}

