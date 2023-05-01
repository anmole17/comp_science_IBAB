#include<stdio.h>

void add(int *ptr1, float *ptr2){
	*ptr2=*ptr1+*ptr2;
}

void mult( int *ptr1, float *ptr2){
	*ptr2= *ptr1 *(*ptr2-*ptr1);
}

int main(){

	int a1;
        float a2;

	printf("Enter 2 numbers: integer and float respectively\n");
	scanf("%d %f", &a1, &a2);
       	add(&a1, &a2);
	printf("Addition: %f\n", a2);
	mult(&a1, &a2);
	printf("Multiplication: %f\n", a2);
	return 0;
}
