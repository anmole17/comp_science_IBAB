#include<stdio.h>

struct C1{
	int c;
	struct D1{
		int d;
	} d1;	
};

struct B1{
	int b;
};

struct A1{
	int a;
	struct B1 b1;
};


int main(){
	struct A1 a1;
	struct C1 c1;
        struct B1 b1;
        struct D1 d1;
	
	printf("%ld %ld %ld %ld\n", sizeof(a1), sizeof(b1), sizeof(c1.d1.d), sizeof(d1));	return 0;


}
