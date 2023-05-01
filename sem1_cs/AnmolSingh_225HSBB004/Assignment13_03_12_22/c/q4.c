/*Write a program to reverse the content of a file line by line*/

#include<stdio.h>
#include<string.h>

void whitespaces(char string[],int pos, int newlines[], int new){
	int i,j=0;
	for(i=0;i<new; i++){
		if ((pos+1) == newlines[i]){
			strcat(string,"\n");
			j++;
		}
	}
	if(j==0){
		strcat(string," ");
	}

}

char reverse(char *string){
	int len,j,i;
	char reverse[100];
	len=strlen(string);
	j=0;
	for(i=len-1; i>=0;i--){
		
		reverse[j]=string[i];
		j++;
	}
	string=reverse;

}
int main(){
	FILE *fptr;
	char ch, file[500], line, repfile[700]="";
	int cntr, cntr2, newline[50], new=0, fpos, i;

	printf("Enter 5 lines into the file:\n");
	fptr=fopen("4.txt","w");
	do{
		scanf("%c",&line);
		if(line=='\n'){i+=1;} 
		fprintf(fptr,"%c",line);
	} while(i<5);

	fptr=fopen("4.txt", "r");
    while(!feof(fptr)){
		fpos=ftell(fptr);
		fscanf(fptr,"%c",&ch);
		file[fpos]=ch;
		if(ch=='\n'){
		newline[new]=fpos;
		new++;
		}
	}

	
	int pos;
	char  temp[50];
	fptr=fopen("4.txt", "r");
    while(!feof(fptr)){
		
		fscanf(fptr,"%c",&ch);
		pos=ftell(fptr);
		for(int i=0; i<new; i++){
			if(ch!='\n'){
				strcmp(temp,ch);			
			}
			reverse(temp);
			strcmp(repfile, temp);
			strcmp(repfile,"\n");

		
		}
	}
	fclose(fptr);
	fptr=fopen("4.txt", "w");
	printf("\nNew file: %s\n", repfile);
	fprintf(fptr,"%s", repfile);


	return (0);
	
}