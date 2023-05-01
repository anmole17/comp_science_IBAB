/*Write a program to count the number of words in a file*/

#include<stdio.h>

int main(){
	FILE *fptr;
	char ch, ch2, ch3;
	int cntr;
	fptr=fopen("1.txt", "r");
	cntr=0;
	ch="";
	ch2="";
	while(!feof(fptr))
	{
		fscanf(fptr,"%c",&ch3);
		
		if((ch3!=' ' || ch3 !='\n') && (ch2==' '||ch2=='\n') &&(ch!=' ' || ch !='\n') ){
		cntr++;
		}
		ch=ch2; ch2=ch3;
	}

	printf("The number of words in the file is %d.\n", cntr+1);

	return (0);
}
