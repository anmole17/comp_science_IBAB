#include<stdio.h>
#include<stdlib.h>

struct A1{
	int a;
	char g;
	long b;
};

int main()
{	struct A1 *ptr3,a1;
	int *ptr, a;
	long *ptr2;
	a=10;
	ptr=&a;

	printf("size :%d %d %d", sizeof(ptr),sizeof(*ptr), sizeof(*ptr2), sizeof(ptr2));
	printf(" %d %d %d", sizeof(ptr3), sizeof(*ptr3), sizeof(a1));
}

