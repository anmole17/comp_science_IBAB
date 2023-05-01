#include<stdio.h>

int main()
{
	int a, b, *ptr1, *ptr2;
	a=10;
	b=22;
	ptr1=&a;
	ptr2=&b;
	
	printf("Sum using pointers:\n%d\n", *ptr1+*ptr2);
	printf("Difference:\n%d\n", *ptr1-*ptr2);

	return(0);
	
}
