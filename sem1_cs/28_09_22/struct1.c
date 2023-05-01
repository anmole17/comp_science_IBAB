#include<stdio.h>

struct A1
{
	int i;
	float j;
};

int main()
{
	struct A1 a1;
	a1.i=10;
	a1.j=20.545;
	printf(" %d %f \n",a1.i,a1.j);
	return(0);
}
