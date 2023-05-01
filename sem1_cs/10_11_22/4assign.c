#include<stdio.h>

int main(){
	FILE *fptr;
	int i=0;
	char line,words[100];
	fptr=fopen("4.txt","w");
	do{
		scanf("%c",&line);
		if(line=='\n'){i+=1;} 
		fprintf(fptr,"%c",line);
	} while(i<10);

	fclose(fptr);
	i=0;
	fptr=fopen("4.txt","r");
	while(!feof(fptr))
	{	i+=1;
		fscanf(fptr, "%s",words);
		if(i%2==0)
		{
			printf("%s ", words);
		}
	
	}			
	fclose(fptr);
	return 0;
}
