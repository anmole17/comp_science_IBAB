#include<stdio.h>

int f1(int x)
{
	printf("From f1() printing args sent by main() :%d\n",x);
	return(x*x);
}

int main()
{
	int i,j,res;
	printf("Pls enter some int number between 1 and 10");
	scanf("%d",&i);
	res=f1(i);
	printf("Square of num I sent to f1() is: %d\n",res);
	return(0);
}

