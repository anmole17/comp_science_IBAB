#include<stdio.h>
#include<stdlib.h>

struct node
{
	int i;
	struct node *next;
};

int main()
{
	struct node *first,*bkup,*bkup2,*second,*third;
	int ch;
	int i=1;
	first=malloc(sizeof(struct node));
	printf("Address in first->%d\n",first);
	bkup=first;
	bkup2=first;

	printf("Address in bkup->%d\n",bkup);
	first->i=10;
	first->next=NULL;
	printf("Val at Node 1->:%d\n",first->i);

	while(1)
	{
		printf("Do u want to create new node\n");
		scanf("%d",&ch);
		if(ch == 1)
		{
			first=malloc(sizeof(struct node));
			first->i=i;
			printf("%d\n",first->i);
			bkup->next=first;
			bkup=bkup->next;
			printf("Address in first->%d\n",first);
			printf("Address in bkup->%d\n",bkup);
			first->next=NULL;
			i++;
		}
		else
		{
			first=bkup2;
			while((first->next)!=NULL)
			{
				printf("%d \n",first->i);
				first=first->next;
			}
			printf("%d \n",first->i);
		}
	}
	return(0);
}

