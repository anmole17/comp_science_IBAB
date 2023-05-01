#include<stdio.h>

int f1(int x)
{
	return(x*x);
}

int main()
{
	int i,res;
	printf("Enter an integer value: ");
	scanf("%d",&i);
	res=f1(i);
	printf("The Square of the number %d is %d\n",i,res);
	return(0);
}
