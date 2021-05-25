#include<iostream>
using namespace std;
#define MAX 100
int top =-1;
int stack[MAX];
bool isfull(){
	if(top>MAX-1)
		return 1;
	return 0;
}
bool isempty(){
	if(top<0)
		return 1;
	return 0;
}
int push(int data){
	if(isfull()){
		cout<<"Stack Overflow"<<endl;
		return -1;
	}
	top=top+1;
	stack[top]=data;
	cout<<"Element is Pushed and Top is Ponting to : "<<stack[top]<<endl;
	return 0;
}
int pop(){
	if(isempty()){
		cout<<"Stack underflow"<<endl;
		return -1;
	}
	int deletedelement=stack[top];
	top--;
	return deletedelement;
}
int peek(){
	if(isempty()){
		cout<<"Stack Underflow"<<endl;
		return -1;
	}
	int peekelement=stack[top];
	return peekelement;
}
int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	int temp=pop();
	cout<<"Deleted Element is : "<<temp<<endl;
	cout<<"Peek Element is : "<<peek()<<endl;
	return 0;
}
