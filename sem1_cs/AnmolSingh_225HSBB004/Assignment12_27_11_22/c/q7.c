/*Improvise(6) and print the position at which the vowel is present in the file.*/

#include<stdio.h>

int main(){
	FILE *fptr;
	int j,pos;
	char line,chars;
	j=0;
	printf("Enter 5 lines\n");
	fptr=fopen("q6.txt","w");
	do{
		scanf("%c",&line);
		if(line=='\n'){j+=1;} 
		fprintf(fptr,"%c",line);
	} while(j<5);

	fclose(fptr);

	printf("\nReading from file:\n");
	fptr=fopen("q6.txt","r");
	while(!feof(fptr))
	{
		fscanf(fptr, "%c",&chars);
		pos=ftell(fptr);
		if(chars=='a'||chars=='A'|| 
				chars=='e'||chars=='E'|| 
				chars=='i'||chars=='I'|| 
				chars=='o'||chars=='O'|| 
				chars=='u'||chars=='U')
		{ printf("%c present at position %d \n",chars, pos);
		}
	
	}	
	fclose(fptr);
	

	return 0;
}
