#include<stdio.h>

void cube(int *ptr){
	*ptr=(*ptr)*(*ptr)*(*ptr);
}

int main(){
	int i;
	printf("Enter integer:\n");
	scanf("%d",&i);
	cube(&i);
	printf("Print cube from main(): %d\n", i);
	return 0;
}
