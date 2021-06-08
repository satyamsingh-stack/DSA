#include<stdio.h>
#include<malloc.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node* head=NULL;
void insert_in_beg(int data){
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=data;
	new_node->next=head;
	head=new_node;
}
void insert_at_end(int data){
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
void insertion_in_between(int afterward,int data){
	struct Node * temp=head;
	if(head==NULL){
		printf("Linkedlist is Empty");
	}
	else{
		while(temp->data!=afterward){
			temp=temp->next;
		}
		struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
		new_node->data=data;
		new_node->next=temp->next;
		temp->next=new_node;
	}
}
void middle(){
	struct Node* slow,*fast;
	slow=fast=head;
	int found=0;
	if(head==NULL){
		printf("Linkedlist is Empty");
	}
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	printf("Middle of Linkedlist is : %d\n",slow->data);
}
void nth(int n){
	struct Node* curr,*prev;
	prev=curr=head;
	int i;
	if(head==NULL){
		printf("Linkedlist is Empty");
	}
	for(i=0;i<n;i++){
		if(curr!=NULL){
			curr=curr->next;
		}
		else{
			printf("Node can not be found");
			return ;
		}
	}
	while(curr!=NULL){
		curr=curr->next;
		prev=prev->next;
	}
	printf("%d Node from last is : %d\n",n,prev->data);
}
void loopfound(){
	struct Node *slow,*fast;
	slow=fast=head;
	if(head==NULL){
		printf("Linkedlist is Empty");
	}
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast){
			printf("Loop Exist\n");
			return ;
		}		
	}
	printf("Loop not Exist");
}
void starting(){
	struct Node* slow,*fast;
	slow=fast=head;
	int found=0;
	if(head==NULL){
		printf("Linkedlist is Empty");
	}
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast){
			found=1;
			break;
		}
	}
	if(found){
		slow=head;
		while(slow!=fast){
			slow=slow->next;
			fast=fast->next;
		}
		printf("Starting of the Loop is : %d\n",slow->data);
	}
	
}
void count(){
	struct Node *temp;
	temp=head;
	int c=0;
	while(temp!=NULL){
		temp=temp->next;
		c++;
	}
	printf("Total Number of Node is : %d\n",c);
}
void even_odd(){
	struct Node* temp;
	temp=head;
	int s=0;
	while(temp!=NULL){
		temp=temp->next;
		s++;
	}
	if(s&1){
		printf("Odd number of Node present\n");
	}
	else{
		printf("Even number of Node present\n");
	}
}
void occerence(){
	struct Node *temp;
	temp=head;
	int n,s=0;
	printf("Enter the Element : ");	scanf("%d",&n);
	while(temp!=NULL){
		if(temp->data==n){
			s++;
		}
		temp=temp->next;
	}
	printf("%d Found %d times\n",n,s);
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
	insert_in_beg(1);
	insert_in_beg(2);
	printf("After insertion in Beginning : ");
	printlist();
	insert_at_end(3);
	insert_at_end(3);
	insert_at_end(3);
	printf("After insertion at End : ");
	printlist();
	insertion_in_between(2,7);
	printf("After insertion in Between : ");
	printlist();
	middle();
	nth(2);
	count();
	even_odd();
	occerence();
	head->next->next->next->next->next=head->next->next;
	loopfound();
	starting();
}
