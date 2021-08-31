#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node {
	int x;
	struct node * next;
};
void print_list(struct node ** t);
void create_node(struct node ** t,int data);
int main(){
	
	struct node * head=NULL;
	create_node(&head,18);
	create_node(&head,68);
	create_node(&head,58);
	create_node(&head,38);
	create_node(&head,48);
	print_list(&head);
	//free(head);
	}

void create_node(struct node** t,int data){
	struct node * new_node=(struct node*)malloc(sizeof(new_node));
	struct node * temp=(*t);
	if(temp==NULL){
		// i.e no node till now then
		new_node->x=data;
		new_node->next=NULL;
		temp=new_node;
		(*t)=temp;
		//free(temp);
		//return;
	}
	 else if(temp->next==NULL){
		// i.e only one elements
		printf("Hello ERROR DETECTED\n");
		new_node->x=data;
		new_node->next=NULL;
		temp->next=new_node;	
	}
	else{
		while(temp->next!=NULL)
		temp=temp->next;
		new_node->x=data;
		new_node->next=NULL;
		temp->next=new_node;
	}
//free(temp);
return;	
		
}

void print_list(struct node ** t){
	struct node * temp1=(*t);
	if (temp1==NULL){
		printf(" list is empty\n");
	}
	while(temp1->next!=NULL){
		printf("%d-->",temp1->x);
		temp1=temp1->next;
	}
	printf("%d",temp1->x);
	//free(temp1);
	return;
}
