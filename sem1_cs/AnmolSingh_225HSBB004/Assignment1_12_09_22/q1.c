/*Write a C program, that takes your name as input (you will type it using keyboard) and prints
Hello YourName.  (YourName is the name u entered as input).*/

#include<stdio.h>

int main()
{
	char name[50];
	printf("Enter your name:\n");
	scanf("%s",name);
	printf("Hello! %s \n", name);
	return(0);
}
