#include<stdio.h>
int main()
{
	FILE *fptr;
	char arr;
	fptr=fopen("1.txt","r");
	while(!feof(fptr))
	{
	fscanf(fptr,"%c",&arr);
	if(arr == ' '){printf("WhiteSpace!!\n");}
	printf("%c",arr);
	}
	fclose(fptr);
}

