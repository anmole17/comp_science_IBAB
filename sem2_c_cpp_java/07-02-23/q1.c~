/*
1. Write a program, in which you have a linked list of 5 nodes. Give an option to print any node value (every node has one  int value). Go to that specific node (traverse) and print that specific int value.
*/

#include<stdlib.h>
#include<stdio.h>

struct node{
	int val;
	struct node *next;
};

struct node *create_node( struct node *prev, int val){
	struct node *new;
	
	new=malloc(sizeof(struct node));
	prev->next=new;
	new->val=val;
	new->next=NULL;
	prev=new;
	return prev;
}

int traverse(struct node *start, int node_no){
	int i=1;
	while((start->next)!=NULL)
	{	
		if(i==node_no){
			printf("Value at node %d is %d\n",node_no,start->val);
			return(0);		
		}
		start=start->next;
		i++;
	}
	printf("Value at node %d is %d\n",node_no,start->val);
	return(0);

}
int main(){
	struct node *first,*tem,*bk;
	int val=1;
	int node_no;
	first=malloc(sizeof(struct node));
	bk=first;
	tem=first; /* this is useful as when we traverse with tem, first node address is still saved as bk*/
	first->val=1;
	first->next=NULL;
	for(val=3; val<=9; val=val+2)
	{
		first=create_node(first, val);
	}
	int v=1;
	while(v){
	printf("There are 5 nodes in the linked list, which one do you want to traverse to? Enter 1-5, 0 to exit\n");
	scanf("%d", &node_no);
	
	if(node_no<6 && node_no>0){
	traverse(tem,node_no);
	v=0;
	}
	else if( node_no==0){
		v=0;
	}
	else{
	printf("Wrong input! Enter valid value.");
	}
	}
	return(0);	
}
