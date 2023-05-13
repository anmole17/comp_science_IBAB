#include<stdio.h>
#include<stdlib.h>

struct node
{
	int i;
	struct node *next;
};

int main()
{
	struct node *first,*bkup,*second,*third,*fourth;

	first=malloc(sizeof(struct node));
	bkup=first;
	first->i=10;
	printf("Val at Node 1->:%d\n",first->i);

	second=malloc(sizeof(struct node));
	second->i=22;
	printf("Val at Node 2->:%d\n",second->i);
 	first->next = second;
	second->next=NULL;

	third=malloc(sizeof(struct node));
	third->i=33;
	printf("Val at Node 3->:%d\n",third->i);
	second->next=third;
	third->next=NULL;

	fourth=malloc(sizeof(struct node));
	fourth->i=44;
	printf("Val at Node 4->:%d\n",fourth->i);
	third->next=fourth;
	fourth->next=NULL;
	
	first=bkup;
	
	while((first->next)!=NULL)
	{
	printf("%d\n",first->i);
	first=first->next;
	}
	printf("%d\n",first->i);
	return(0);
}

