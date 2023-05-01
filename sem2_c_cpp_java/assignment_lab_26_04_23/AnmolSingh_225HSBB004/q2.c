/*
2. Write a Program in C to implement a doubly linked list with the following features/clauses:
- DLL contains 16 nodes, each with an integer value as data
- insertion and deletion of nodes should be allowed with the following protocol
- any insertion can happen only at position 4 or position 8.
For every data that needs to be inserted, user should also input its position (4 or 8)
- After every insertion operation, the whole DLL should be displayed.
- Deletion of node can happen only at position 3. This means, once the deletion
option is selected by the user, the node at position 3 should be the one deleted.
- After every deletion operation entire DLL should be displayed.
*/

#include<stdlib.h>
#include<stdio.h>

typedef struct node{ /* using typedef to call struct node as node*/
	int val;
	struct node *next, *before;
	
} node;

node *create_node( node *prev, int val){ /* function to make and add new node at end of the list;*/
	node *new;
	
	new=malloc(sizeof(node));
	prev->next=new;
	new->val=val;
	new->before=prev;
	new->next=NULL;
	prev=new;
	return prev;/* returns struct node pointer*/
}

node *insert_node( node *start, int node_no, int val, int *node_cnt){/* function to add nodes only at specific positions*/
	node *new, *next_nd;
	int i;
	for(i=1;i<(node_no-1);i++){
	start=start->next;
	}
	
	if(*node_cnt==3 || *node_cnt==7){/* if at the end of list utilize create_node function*/
	new=create_node(start,val);
	}
	else{ // adding nodes in between 2 pre existing nodes
	new=malloc(sizeof(node));
	new->next=start->next;
	start->next=new;
	next_nd=start->next;
	next_nd->before=new;
	}
	new->val=val;
	(*node_cnt)++;
	return new;
}

node *delete_node( node *start, int node_no, int *node_cnt){ /*to delete node at any given position*/
	node *nd;
	for(int i=0;i<node_no-2;i++){
	start=start->next;
	}
	if((*node_cnt)==3){
		start->next=NULL;
	}
	else{nd=start->next;
	start->next=nd->next;
	nd=nd->next;
	nd->before=start;
	}(*node_cnt)--;
	return start;
}
int traverse(node *start){ /* to traverse forward using next*/
	int i=1; 
	printf("\nTraverse forward using `*next`:\n");
	while((start->next)!=NULL)
	{	
		printf("Value at node %d at address %p has value %d\n",i,start,start->val);
		start=start->next;
		i++;
	}
	printf("Value at node %d at address %p has value %d\n",i,start,start->val);
	return(i);

}
// To traverse in reverse; here it is not required so commented out;
/*int rev_traverse(struct node *end, int end_node){ 
 	printf("Traverse reverse using `*before`:\n");
 	while((end->before)!=NULL)
 	{	
 		printf("Value at node %d is %d\n",end_node,end->val);
 		end=end->before;
 		end_node--;
 	}
 	printf("Value at node %d is %d\n",end_node,end->val);
 	return(0);
 }
*/

int main(){ /* main does not have specific funtion related to DLL but rather the controls the flow of the programme*/
	node *first,*tem,*bk, *endbk;
	int val=1;
	int node_no,i, node_cnt=0;
	first=malloc(sizeof(node));
	bk=first;
	first->val=val;
	first->before=NULL;
	first->next=NULL;
	node_cnt++;
	for(val=2; val<=16; val++)
	{
		first=create_node(first, val);
		node_cnt++;
	}
	endbk=first;
	node *sv_node;
	printf("DLL:\n");
	traverse(bk);
	int x=1;
	while(x){
	printf("To insert a node press 1, to delete press 2; 0 to exit.\n");
	scanf("%d", &x);
	int node_no;
	if(x==1){
		printf("Enter the integer value you want to insert: \n");
		scanf("%d",&val);// the value enterd should be integer else program will misbehave   
		
		printf("Where do you want to insert the node 4th or 8th position; No. of nodes right now: %d \n", node_cnt);
		scanf("%d",&node_no);
		if((node_no==4 && node_cnt>=3) || (node_no==8 && node_cnt>=7)){
			if(node_cnt==3 || node_cnt==7){
				endbk=insert_node(bk, node_no, val, &node_cnt);
				traverse(bk);
			}
			else{
			sv_node=insert_node(bk, node_no, val, &node_cnt);
			traverse(bk);}
		}
		else{printf("Enter valid node: only 4th or 8th; Cannot insert at 8 if more or equal to 7 nodes present.\n");}
	}
	else if(x==2){
		if(node_cnt>=3){
			printf("Node 3 will be deleted");
			delete_node(bk,3,&node_cnt);
			traverse(bk);
			}
		else{ printf("No mode nodes can be deleted; Too less nodes to perform any action");
			traverse(bk);
			}
	}
	else{
		if(x!=0){
		printf("Wrong input!\n");}
		}
	if(node_cnt==2){
		printf("Too less nodes to perform any further action. Exiting-->\n");
		break;
	}
	}
	return(0);	
}
