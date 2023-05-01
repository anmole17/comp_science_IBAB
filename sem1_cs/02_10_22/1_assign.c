/*Write a program in which you have a struct that has two elements , one integer and one string. Let a1 and a2 be two instances (implementation) of this struct. Store some values for the int and string elements of both variables a1,a2 and display the same.*/
#include<stdio.h>

struct subj
        {
                int marks;
                char *name;
        };

int main()
{

	struct subj a1, a2;
	a1.name="Xin Yi";
	a1.marks=73;
	a2.name="Doodle";
	a2.marks=30;
	

	printf("%s: %d marks.\n%s: %d marks\n",
		       	a1.name, a1.marks, a2.name, a2.marks);
	return(0);
}
