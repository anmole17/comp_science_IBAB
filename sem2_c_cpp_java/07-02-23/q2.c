/*
2. Have two linked lists of 3 nodes each. Every node has one int value.
Print both the linked lists. Now concat the lists (add second to end of first), creating a new Linked list with 6 nodes. Traverse this new list and print the value at each node.
*/

#include<stdlib.h>
#include<stdio.h>

struct node{
	int val;
	struct node *next;
};

struct node *create_node( struct node *prev, int *val){
	struct node *new;	
	new=malloc(sizeof(struct node));
	prev->next=new;
	new->val=*val;
	new->next=NULL;
	prev=new;
	*val=*val+2;
	return prev;
}

int traverse(struct node *start){
	int i=1;
	while((start->next)!=NULL)
	{	
		printf("Value at node %d is %d\n",i,start->val);
		start=start->next;
		i++;
	}
	printf("Value at node %d is %d\n",i,start->val);
	return(0);

}
int main(){
	struct node *list1,*list2,*tem,*bk,*bk2;
	int val1=1;
	int val2=0;
	int i;
	list1=malloc(sizeof(struct node));
	bk=list1;
	tem=list1; /* this is useful as when we traverse with tem, first node address is still saved as bk*/
	list1->val=val1;
	val1+=2;
	list1->next=NULL;
	
	list2=malloc(sizeof(struct node));
	bk2=list2; 
	list2->val=val2;
	val2+=2;
	list2->next=NULL;
	
	for(i=0; i<2; i++)
	{
		list1=create_node(list1, &val1);
		list2=create_node(list2, &val2);
	}
	list1->next=bk2;
	traverse(tem);

	return(0);	
}
