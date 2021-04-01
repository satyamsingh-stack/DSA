#include<stdio.h>
#include<malloc.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *head=NULL;
void insertion_in_beginning(int data){
	struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=data;
	new_node->next=head;
	head=new_node;
}
void insertion_afterward(int afterward,int data){
	struct Node* temp;
	temp=head;
	if(head==NULL){
		printf("List is Empty");
	}
	else{
		while(temp->data!=afterward){
			temp=temp->next;
			if(temp==NULL){
				printf("Key is not Found");
			}
		}
		struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
		new_node->data=data;
		new_node->next=temp->next;
		temp->next=new_node;
	}
}
void deletion(int data){
	struct Node *prev,*temp;
	temp=head;
	prev=NULL;
	if(temp==NULL){
		printf("List is Empty");
	}
	if(temp->data==data){
		head=temp->next;
		return ;
	}
	while(temp->data!=data && temp!=NULL){
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL){
		printf("Node Can not be deleted");
		return ;
	}
	prev->next=temp->next;
}
void printlist(){
	struct Node *ptr;
	ptr=head;
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
void main()
{
	insertion_in_beginning(4);
	printf("After Insertion in Beginning : ");
	printlist();
	insertion_in_beginning(1);
	printf("After Insertion in Beginning : ");
	printlist();
	insertion_afterward(1,2);
	printf("After Insertion in Between : ");
	printlist();
	insertion_afterward(2,3);
	printf("After Insertion in Between : ");
	printlist();
	deletion(1);
	printf("After Delete a Node : ");
	printlist();
	deletion(2);
	printf("After deletion a Node : ");
	printlist();
}
