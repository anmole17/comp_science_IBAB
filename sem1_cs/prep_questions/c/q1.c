/*Write a program to compare two strings and print the common letters in both. It is not case sensitive.*/

#include<stdio.h>
#include<string.h>

int main(){

	char string1[50], string2[50], common[50];
	int len1,len2,loop,i,ccount;

	printf("Enter first string\n");
	scanf("%s",string1);

	printf("Enter second string\n");   
        scanf("%s",string2);

	len1=strlen(string1);
	len2=strlen(string2);
	
	if(len1>len2){
		loop=len2;
	}
	else {loop=len1;}	
	printf("Common letters\n");
	for(i=0;i<loop;i++)
	{	
		if(string1[i]==string2[i] &&)
		{	
			printf("%c ", string1[i]);	
		}	
	}
}
