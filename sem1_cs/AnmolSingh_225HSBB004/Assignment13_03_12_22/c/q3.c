/*Write a program to find a word in the file and replace it with another word*/

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
int main(){
	FILE *fptr;
	char find[50],replace[50], file[500], repfile[700]="", ch, word[50];
	int file_len, new, j,newline[50], fpos, pos;
	fptr=fopen("1.txt", "r");
    while(!feof(fptr)){
		fpos=ftell(fptr);
		fscanf(fptr,"%c",&ch);
		file[fpos]=ch;
		if(ch=='\n'){
		newline[new]=fpos;
		new++;
		}
	}
	fclose(fptr);

	printf("Original file:\n%s", file);
	printf("\nWhich word to find?\n");
	scanf("%s",find);
	printf("Which word to replace with?\n");
    scanf("%s",replace);
	

	fptr=fopen("1.txt", "r");
    while(!feof(fptr)){
		
		fscanf(fptr,"%s",word);
		pos=ftell(fptr);
		if(strcmp(word,find)==0){

				strcat(repfile, replace);
				whitespaces(repfile , pos, newline, new);
				}
			
		else{
				strcat(repfile, word);
				whitespaces(repfile , pos, newline, new);
			}
		}

	fclose(fptr);
	fptr=fopen("1.txt", "w");
	printf("\nNew file: %s\n", repfile);
	fprintf(fptr,"%s", repfile);
	
	

	return (0);
}
