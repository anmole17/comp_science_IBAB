#include<stdio.h>

struct A
{
	int a;
	char f;
	double b;
};

union B
{
	int ds;
	char s[9];
	char l;
};

int main()
{	union B bb, *ptr3;
	struct A a1, *ptr4;
	int a, *ptr, *ptr2;
	char b;
	b='c'; 	
	a1.a=4;
	a1.f='c';
	a1.b=65;
	printf("%ld %ld %ld %ld\n", sizeof(*ptr2), sizeof(*ptr), sizeof(*ptr3), sizeof(*ptr4));
	
	ptr=&b;
	ptr4=&b;
	printf("%ld %ld %ld %ld %ld %ld %c %d %d", sizeof(struct A),
		       	sizeof(a1), sizeof(bb), sizeof(a), sizeof(b), sizeof(*ptr4), *ptr, &a1, ptr);

	return(0);
	
}
