#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack <int> s;
	int i;
	for(i=0;i<5;i++){
		s.push(i);
	}
	cout<<"Top Element is : "<<s.top()<<endl;
	cout<<"Size of stack is : "<<s.size()<<endl;
	for(i=0;i<5;i++){
		s.pop();
	}
	if(s.empty())
		cout<<"Stack is Empty"<<endl;
	else
		cout<<"Stack have some Element"<<endl;
	return 0;
}
