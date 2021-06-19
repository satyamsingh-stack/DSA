#include<stdio.h>
#include<malloc.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* head=NULL;
void insert(int data){
	struct Node* temp=head;
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node*));
	new_node->data=data;
	new_node->next=NULL;
	if(head==NULL){
		head=new_node;
	}
	else{
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=new_node;
	}
}
void reverse(struct Node* head){
	if(head!=NULL){
		reverse(head->next);
		printf("%d ",head->data);
	}
}
void printlist(){
	struct Node* ptr;
	ptr=head;
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
void main(){
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	printf("Linkedlist is : ");
	printlist();
	reverse(head);
}
