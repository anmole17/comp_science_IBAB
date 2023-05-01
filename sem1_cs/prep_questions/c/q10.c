/*Write a C program that takes a string and creates a palindrome.*/

#include<stdio.h>
#include<string.h>
int main(){
	int len,i;
	char string[50], pdr[120];
	printf("Input string:\n");
	scanf("%s",string);
	
	len=strlen(string);

	for(i=0; i<((2*len)-1); i++){
		if(i<len){
			pdr[i]=string[i];
		}
		else{
			pdr[i]=string[(2*len)-i-2];
		}
	}

	printf("Palindrome:\n%s", pdr);
	return(0);
}

