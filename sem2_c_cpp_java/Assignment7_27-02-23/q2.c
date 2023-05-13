/*
2.  Write a program in C, to create a SLL with 8 nodes. Let each node contain one data item which is an integer.
Traverse through the list and print the values at each node. Now select 2 nodes (input by user), validate the same,
then interchange the values of the nodes, and then do another traversal that should validate the change of
values.
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

int traverse(struct node *start){
	int i=1; 
	while((start->next)!=NULL)
	{	
		printf("Value at node %d is %d, Address: %p\n",i,start->val, start);
		start=start->next;
		i++;
	}
	printf("Value at node %d is %d, Address: %p\n",i,start->val, start);
	return(0);

}
struct node *go_to_node( struct node *start, int node_no){
	
	for(int i=1;i<node_no;i++){
	start=start->next;
	}
	return start;
}
int main(){
	struct node *first,*tem,*bk, *new;
	int val=1;
	int node1, node2;
	first=malloc(sizeof(struct node));
	bk=first;
	first->val=val;
	first->next=NULL;
	val++;
	for(val; val<9; val++)
	{
		first=create_node(first, val);
	}
	traverse(bk);
	int v=1, val_bk;
	first=bk;
	while(v){
	printf("There are 8 nodes in the linked list, Enter 2 nodes to interchange values. Enter two 1-8, 0 to exit\n");
	scanf("%d", &node1);
	scanf("%d", &node2);
	
	if((node1<9 && node1>0)&&(node2<9 && node2>0)){
	for(int i=1;i<node1-1;i++){
		first=first->next;
	}
	new=go_to_node(bk,node2);
	val_bk=first->val;
	first->val=new->val;
	new->val=val_bk;
	v=0;
	}
	else if( node1==0){
		v=0;
	}
	else{
	printf("Wrong input! Enter valid value.");
	}
	}
	traverse(bk);	
	return(0);	
}
