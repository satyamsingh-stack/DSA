#include<iostream>
#include<stack>
using namespace std;
bool isMatching(char ob,char cb){
	if(ob=='[' && cb==']')
		return true;
	if(ob=='{' && cb=='}')
		return true;
	if(ob=='(' && cb==')')
		return true;
	return false;
}
bool isblanced(string exp){
	stack<char> s;
	int i;
	for(i=0;i<exp.length();i++){
			if(exp[i]=='[' || exp[i]=='{' || exp[i]=='(')
				s.push(exp[i]);
			else{
				if(s.empty())
					return false;
				else if(!isMatching(s.top(),exp[i]))
					return false;
			s.pop();
		}
	}
	if(s.empty())
		return true;
	return false;	
}
int main(){
	string exp1="[[({})]]";
	string exp2="({";
	cout<<isblanced(exp1)<<endl;
	cout<<isblanced(exp2)<<endl;
	return 0;
}
