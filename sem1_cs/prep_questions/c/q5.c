/*5. Write a C program to reverse a string and print both original and reversed strings.*/
#include<stdio.h>
#include<string.h>

int main(){

	char string[100], reverse[100];
	int len,i,j;
	printf("Enter a string\n");
	scanf("%s", string);
	len=strlen(string);
	j=0;
	for(i=len-1; i>=0;i--){
		
		reverse[j]=string[i];
		j++;
	}
	printf("Original string: %s\n", string);
	printf("\nReverse string: %s\n", reverse);

	return (0);
	
}
