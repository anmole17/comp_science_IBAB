/* Write a C program that calculates the length of a string without using any library from string.h*/

#include<stdio.h>

int main(){
	char string[100];
	int length;
	
	printf("Enter String\n");
	scanf("%[^\n]s", string);
	length=0;
	while(string[length]!='\0'){
	length++;
	}
	printf("Length of string:\n%d\n", length);

	return 0;



}
