#include<stdio.h>
#include<stdlib.h>

struct node
{
	int i;
	struct node *next;
};

int main()
{
	struct node *first,*bkup,*second,*third;

	first=malloc(sizeof(struct node));
	bkup=first;
	first->i=10;
	printf("Val at Node 1->:%d\n",first->i);

	second=malloc(sizeof(struct node));
	second->i=22;
	printf("Val at Node 2->:%d\n",second->i);
 	first->next = second;

	third=malloc(sizeof(struct node));
	third->i=33;
	printf("Val at Node 3->:%d\n",third->i);
	second->next=third;

	first=bkup;
	printf("%d\n",first->i);
	first=first->next;
	printf("%d\n",first->i);
	first=first->next;
	printf("%d\n",first->i);
	return(0);
}

