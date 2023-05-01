#include<stdio.h>


int f1(int a, int b)
{
	return(a+b);
}

int f1()
{
	int a, b;
	a=10;
	b=20;

	return(a+b);
}
int main()
{	
	int c, d;
	c=f1();
	d=f1(12,22);

	printf("%d %d", c, d);
	return(0);
}
