#include<stdio.h>
#include<string.h>

int main()
{	FILE *fptr;
	char arr[100], arr2;
	scanf("%[^\n]s", arr);
	fptr=fopen("3out.txt","w");	
	fprintf(fptr,"%s", arr);
	fclose(fptr);

	fptr=fopen("3out.txt","r");
	while(!feof(fptr)){
		fscanf(fptr,"%c",&arr2);
		printf("%c\n",arr2);
	}
	fclose(fptr);
	return 0;

}
