#include<stdio.h>
#include<stdlib.h>

union mix{
	int a;
	double b;
	char c;
};
int main(){
	
	int a;
	union mix *ptr, *tem;
	double b;
	char c;
	a=5;
	b=12.656555;
	c='c';
	ptr=malloc(14);
	tem=ptr;

	ptr->a=a;
	ptr++;

	ptr->b=b;
	ptr++;

	ptr->c=c;
	ptr=tem;

	printf("%d\n",ptr->c);
	ptr++;
	printf("%f\n", ptr->b);
	ptr++;
	printf("%c\n",ptr->c);
	return 0;


}
