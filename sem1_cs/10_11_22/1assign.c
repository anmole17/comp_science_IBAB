#include<stdio.h>

int main()
{
	FILE *fptr;
	fptr= fopen("assign.txt","w");
	fprintf(fptr,"Anmol");
	fclose(fptr);
	return 0;

}
