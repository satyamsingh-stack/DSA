#include<stdio.h>
#include<malloc.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *head=NULL;
void insertatend(int data){
	struct Node *temp;
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
void occerence(int n){
	struct Node *temp;
	temp=head;
	int c=0;
	while(temp!=NULL){
		if(temp->data==n)
			c++;
		temp=temp->next;
	}
	printf("Found %d times",c);
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
	insertatend(1);
	insertatend(1);
	insertatend(2);
	printf("After insertion in End : ");
	printlist();
	int n;
	printf("Enter the Number to search : ");
	scanf("%d",&n);
	occerence(n);
}
