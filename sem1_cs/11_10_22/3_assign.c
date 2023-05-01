#include<stdio.h>

int main()
{
	int a, b, i, z, *ptr1, *ptr2;
	a=0;
	b=1;
	ptr1=&a;
	ptr2=&b;
	printf("Fibonacci series till 6 terms using pointers\n");
	for(i=0; i<6; i++)
	{	
		printf("%d\n",*ptr1);
		*ptr2=*ptr1+*ptr2;
		*ptr1=*ptr2-*ptr1;
	}
	return(0);
}
