#include<stdio.h>

int main()
{	int f, x;
	f=1;
	printf("Enter a number for factorial:\n");
	scanf("%d",&x);
	for(int i=1; i<=x;i++)
	{
		f=f*i;
	}
	printf("Factorial of %d is: %d\n",x,f);
	return(0);
}
