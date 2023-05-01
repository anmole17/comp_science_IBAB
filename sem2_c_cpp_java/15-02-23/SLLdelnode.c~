/*
Singlet Linked list delete
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
	struct node *first,*tem,*bk;
	int val=1;
	int node_no;
	first=malloc(sizeof(struct node));
	bk=first;
	tem=first; /* this is useful as when we traverse with tem, first node address is still saved as bk*/
	first->val=val;
	first->next=NULL;
	val++;
	for(val; val<6; val++)
	{
		first=create_node(first, val);
	}
	traverse(bk);
	int v=1;
	first=bk;
	while(v){
	printf("There are 5 nodes in the linked list, which one do you want to delete to? Enter 1-5, 0 to exit\n");
	scanf("%d", &node_no);
	
	if(node_no<6 && node_no>0){
	for(int i=1;i<node_no-1;i++){
		first=first->next;
	}
	first->next=delete_node(bk,node_no);
	v=0;
	}
	else if( node_no==0){
		v=0;
	}
	else{
	printf("Wrong input! Enter valid value.");
	}
	}
	traverse(bk);	
	return(0);	
}
