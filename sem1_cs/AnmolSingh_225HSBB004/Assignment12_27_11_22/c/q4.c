/*Write a C program that takes 3 strings as parameters, concatenate them all and print the final string. Try once using strcat() of string.h and once without the help of library.*/

#include<stdio.h>
#include<string.h>

void concat_def(char string1[],char string2[], char string3[] ){
	char *conc;
	strcat(conc,string1);
	strcat(conc,string2);
	strcat(conc,string3);
	printf("\nConcatenated with strcat():\n%s\n",conc);
}

char concat(char string1[], char string2[], char string3[]){
	int i,l1,l2,l3,len1,len2,len3,total_len;
	len1=strlen(string1);
	len2=strlen(string2);
	len3=strlen(string3);
	total_len=len1+len2+len3;
	char conc[total_len+5];
	i=0;
	l1=0;l2=0;l3=0;
	while(i<total_len){
		if(i<len1){
			conc[i]=string1[l1];
			l1++;
		}
		else if(i<(len1+len2)){
			conc[i]=string2[l2];
			l2++;
		}
		else{
			conc[i]=string3[l3];
			l3++;
		}
		i++;


	}
		printf("\nConcatenated without strcat():\n%s\n", conc);
}


int main(){

	char string1[25],string2[25],string3[25];
	printf("Enter first string:\n");
	scanf("%s", string1);

	printf("Enter second string:\n");
	scanf("%s", string2);

	printf("Enter third string:\n");
	scanf("%s", string3);

	concat_def(string1,string2,string3);
	concat(string1,string2,string3);

	
	return (0);
}

	


