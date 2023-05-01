/* Write a program, where main sends two integer numbers as parameters to function f1(). 
f1() returns back the largest of the two numbers , to main(), which will display the result.
*/

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
