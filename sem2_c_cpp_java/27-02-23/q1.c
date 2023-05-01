/*
1. Write a program in C, to create a SLL with 18 nodes. Let each node contain one data item that is an integer.
Allow deletion of nodes using the following protocol:
                 - Should allow deletion of odd numbered nodes only twice.
                 - The program should exit once only two nodes are left in the list.


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
		printf("Value at node %d is %d\n",i,start->val);
		start=start->next;
		i++;
	}
	printf("Value at node %d is %d\n",i,start->val);
	return(0);

}
struct node *delete_node( struct node *start, int node_no){
	
	for(int i=1;i<=node_no;i++){
	start=start->next;
	}
	return start;
}
int main(){
	struct node *first,*tem,*bk, *new;
	int val=1;
	int node_no;
	int nodes=18;
	first=malloc(sizeof(struct node));
	bk=first;
	first->val=val;
	first->next=NULL;
	val++;
	for(val; val<=nodes; val++)
	{
		first=create_node(first, val);
	}
	traverse(bk);
	int v=1, odd=2;
	first=bk;
	while(nodes>2 && v){
	printf("There are %d nodes in the linked list, which one do you want to delete to? Enter 1-%d, 0 to exit\nDeletion of odd numbered node is allowed only %d times\n", nodes, nodes, odd);
	scanf("%d", &node_no);
	first=bk;
	if(node_no<=nodes && node_no>0){
	if(odd==0 && node_no%2!=0){ 
	printf("Wrong input! Enter even value.\n");
	}
	for(int i=1;i<node_no-1;i++){
		first=first->next;
		}
		if(odd!=0 || node_no%2==0){
		new=delete_node(bk,node_no);
		
		if(node_no==1){
			bk=new;
			first=new;
			nodes--;
			}
		else if(node_no==nodes){
		first->next=NULL;
		nodes--;
		}
		else{
			first->next=new;
			nodes--;
		}
		if ((node_no%2)!=0){
			odd--;
			}
		
		}	
	}
	else if(node_no==0){
		v=0;
	}
	else{
	printf("Wrong input! Enter valid value.\n");
	}
	traverse(bk);
	}	
	return(0);	
}
