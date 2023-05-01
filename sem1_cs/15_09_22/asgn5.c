#include<stdio.h>

int f1()
{	int a; float b;	
	printf("Enter an integer and a float resp.");
	scanf("%d %f",&a,&b);
	printf("Sum of %d and %f is: %f\n",a,b,(a+b));
	return(0);
}

int f2()
{	float a,b;
	printf("enter two floats:");
	scanf("%f %f",&a,&b);
       	printf("The product of %f and %f is: %f\n", a,b, a*b);
	return(0);
}	

int main()
{
	f1();
	f2();
	return(0);
}
