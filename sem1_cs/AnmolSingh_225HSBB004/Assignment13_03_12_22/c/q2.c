/*Write a program to count the number of characters in a file*/

#include<stdio.h>

int main(){
	FILE *fptr;
	char ch;
	int cntr, cntr2;
	fptr=fopen("1.txt", "r");
	cntr=0;
	cntr2=0;
	while(!feof(fptr))
	{
		fscanf(fptr,"%c",&ch);
		if((ch>=65 && ch<=90) || (ch>=97&& ch<=122)){cntr2++;}
		cntr++;
	}

	printf("The number of characters in the file is %d.\n No. of alphabets in the file is %d\n", cntr, cntr2);

	return (0);
}
