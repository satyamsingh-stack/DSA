#include<stdio.h>
#include<malloc.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *head=NULL;
void insertatBeginning(int data){
	struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=data;
	new_node->next=head;
	head=new_node;
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
int main()
{
	insertatBeginning(1);
	printf("After Insertion at Beginning : ");
	printlist();
	insertatBeginning(0);
	printf("After Insertion at Beginning : ");
	printlist();
}
