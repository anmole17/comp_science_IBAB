#include<stdio.h>

void f1(int *ptr)
{
	printf("%d\n",*ptr);
	*ptr=100;
}

int main()
{
	int i=10;
	f1(&i);
	printf("%d \n",i);
	i=33;
	f1(&i);	
	return(0);
}

