#include<stdio.h>
#include<stdlib.h>

struct node
{
	int i;
	struct node *next;
	struct node *prev;
};

int main()
{
struct node *first,*second,*bkup1,*bkup2;

first = malloc(sizeof(struct node));
bkup1=first;
first->i=10;
first->prev=NULL;
first->next=NULL;

second = malloc(sizeof(struct node));
second->i=22;
first->next=second;
second->prev=first;
second->next=NULL;
first=second;

second=malloc(sizeof(struct node));
second->i=30;
first->next=second;
second->prev=first;
second->next=NULL;
first=second;

/* Traverse the List in Forward Direction using "next" pointer */
printf("Traversing in Forward Direction \n");
while(bkup1->next != NULL)
{
	printf("%d \n",bkup1->i);
	bkup1=bkup1->next;
}
printf("%d \n",bkup1->i);
printf("\n");

/* Traverse the List in Backward Direction using "prev" pointer */

printf("Traversing in Backward Direction \n");
while(bkup1->prev !=NULL)
{
	printf("%d \n",bkup1->i);
	bkup1=bkup1->prev;
}
printf("%d \n",bkup1->i);
return(0);
}
