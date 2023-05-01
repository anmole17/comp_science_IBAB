#include<stdio.h>

struct A1
{
	int i;
	float j;
};

struct B1
{
	int i;
	float j;
	double k;
};

int main()
{
	struct A1 a1;
	struct B1 b1;
	a1.i=10;
	a1.j=20.545;
	b1.i=22;
	b1.j=33.323425673;
	b1.k=1.23234;
	printf(" %d %.10f \n",a1.i,a1.j);
	printf(" %d %.10f %.16f \n",b1.i,b1.j,b1.k);
	return(0);
}
