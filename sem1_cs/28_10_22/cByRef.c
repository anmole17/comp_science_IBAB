#include<stdio.h>

void f1(int *ptr)
{
	printf("%d\n",*ptr);
}

int main()
{
	int i=10;
	f1(&i);
	return(0);
}

