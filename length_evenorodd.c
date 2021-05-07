#include<stdio.h>
#include<malloc.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node * head=NULL;
void insertatend(int data){
	struct Node* temp;
	temp=head;
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
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
void evenorodd(){
	struct Node* temp;
	temp=head;
	int l=0;
	if(head==NULL){
		l=0;
	}
	else{
		while(temp!=NULL){
			temp=temp->next;
			l++;
		}
		if(l&1){
			printf("odd");
		}
		else{
			printf("Even");
		}
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
	insertatend(1);
	insertatend(2);
	insertatend(3);
	insertatend(4);
	printf("After insertion in End : ");
	printlist();
	printf("Nodes are : ");
	evenorodd();
}
