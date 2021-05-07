#include<stdio.h>
#include<malloc.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node *head=NULL;
void insertAtEnd(int data){
	struct Node* temp;
	temp=head;
	struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
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
void length(){
	struct Node *temp;
	temp=head;
	int l=0;
	if(head==0){
		printf("Length of Linkedlist is : %d",0);
	}
	else{
		while(temp!=NULL){
			temp=temp->next;
			l++;
		}
		printf("Length of Linkedlist is : %d",l);
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
	insertAtEnd(1);
	insertAtEnd(2);
	insertAtEnd(3);
	insertAtEnd(5);
	printf("After insertion at End Linkedlist is : ");
	printlist();
	length();
}
