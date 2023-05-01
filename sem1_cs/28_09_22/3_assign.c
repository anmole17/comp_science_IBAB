#include<stdio.h>

int main()
{
	int n, i, a, b, c;
	printf("Enter the terms required for fibinacci series\n");
	scanf("%d",&n);
	a = 0;
	b = 1;
	printf("Fibonacci series for %d terms:\n", n);
	for(i=0; i<n; i++)
	{
		c=b;
		b=a+b;
		printf("%d\n", a);
		a=c;
	}

	return(0);
}
