#include<stdio.h>

int f1(int a, int b)
{
	if (a>b)
		return(a);
	else 
		return(b);
}

int main()
{
	int a,b,c;
	printf("Enter 2 integers\n");
	scanf("%d %d",&a,&b);
	c=f1(a,b);
	printf("%d is the largest of the two\n",c);
	return(0);
}
