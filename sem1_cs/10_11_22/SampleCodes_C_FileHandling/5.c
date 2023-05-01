#include<stdio.h>

int main()
{
	FILE *fptr;
	char arr[100];

	fptr=fopen("1.txt","a");
	fprintf(fptr,"Bangalore is beautiful\n");
	fprintf(fptr,"My place is 26 kms away\n");
	fclose(fptr);
}
