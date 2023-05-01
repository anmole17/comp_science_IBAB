/*Write a program to store information about 10 students. Use a struct  to hold the information. The  struct  should contain name,id,age. (There should be 10 instances/implementation of the struct , one for each student).*/
#include<stdio.h>

struct student
        {
                int id;
		int age;
                char name[25];
        };

int main()
{

        struct student std[10];
	int i;
	for (i=0; i<10; i++)
	{
		printf("Enter student #%d name, age and id.\n", i+1);
        	scanf("%s %d %d",std[i].name, &std[i].age, &std[i].id);
	}
	
	for (i=0; i<10; i++)
        {
                printf("%s: ID:%d, Age:%d.\n", std[i].name, std[i].id, std[i].age);
        }

        return(0);
}
