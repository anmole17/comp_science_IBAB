/*Write a program to compare two strings and print the common letters in both. It is case sensitive.*/

#include<stdio.h>
#include<string.h>

int main(){

	char string1[50], string2[50], common[100];
	int len1,len2,i,j,k,ccount;

	printf("Enter first string\n");
	scanf("%s",string1);

	printf("Enter second string\n");   
        scanf("%s",string2);

	len1=strlen(string1);
	len2=strlen(string2);
		
	k=0;
	for(i=0;i<len1;i++)
	{	
		for(j=0;j<len2;j++)
	{	
		if(string1[i]==string2[j])
		{	
			common[k]=string1[i];
			k++;
		}	
	}	
	}
	printf("The common letters are:\n");
	for(i=0; i<strlen(common);i++){
		printf("%c ",common[i]);
	}
}
