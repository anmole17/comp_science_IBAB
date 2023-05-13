/*5. Create a DLL with 10 nodes. Each node has integer value.
User will enter a number to be searched and the program will print Found if the number is present.
*/


#include<stdlib.h>
#include<stdio.h>

struct node{
	int val;
	struct node *next, *before;
	
};

struct node *create_node( struct node *prev, int val){
	struct node *new;
	
	new=malloc(sizeof(struct node));
	prev->next=new;
	new->val=val;
	new->before=prev;
	new->next=NULL;
	prev=new;
	return prev;
}

int traverse(struct node *start){
	int i=1; 
	printf("Traverse forward using `*next`:\n");
	while((start->next)!=NULL)
	{	
		printf("Value at node %d is %d address %u\n",i,start->val, start);
		start=start->next;
		i++;
	}
	printf("Value at node %d is %d address %u\n",i,start->val, start);
	return(i);

}
int rev_traverse(struct node *end, int end_node){ 
	printf("Traverse reverse using `*before`:\n");
	while((end->before)!=NULL)
	{	
		printf("Value at node %d is %d at address %u\n",end_node,end->val, end);
		end=end->before;
		end_node--;
	}
	printf("Value at node %d is %d at address %u\n",end_node,end->val, end);
	return(0);

}
int search( struct node *start, struct node *end, int num){
    while((start->next!=NULL)&&(end->before!=NULL)){
        if(start->val==num){
            printf("Found at %u address\n",start);
            return 0;
        }
        else if(end->val==num){
            printf("Found at %u address\n",end);
            return 0;
        }
        start=start->next;
        end=end->before;

    }
    if(start->val==num){
            printf("Found at %u address\n",start);
            return 0;
        }
    else if(end->val==num){
            printf("Found at %u address\n",end);
            return 0;
        }
    else{
        printf("Value Not Found!!\n");
    }
}

int main(){
	struct node *first,*end,*bk;
	int val=1;
	int node_no,i;
	first=malloc(sizeof(struct node));
	bk=first;
	first->val=1;
	first->before=NULL;
	first->next=NULL;
	for(val=3; val<=20; val+=2)
	{
		first=create_node(first, val);
	}
    end=first;
	printf("DLL:\n");
	traverse(bk);
    printf("Enter an integer to be searched:\n");
    int n;
    scanf("%d", &n);
    search(bk, end, n);

	return(0);	
}
