#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){

	string str = "10200";
	int k=1, n=str.size();
	stack<char> mystack;

	for(char x: str){
		while(!mystack.empty() && k>0 && mystack.top()>x){
			mystack.pop();
			k--;
		}

		if(!mystack.empty() || x!='0')
			mystack.push(x);
	}


	while(!mystack.empty() && k--)
		mystack.pop();
	if(mystack.empty())
		cout<<"0";

	while(!mystack.empty()){
		str[n-1] = mystack.top();
		mystack.pop();
		n-=1;
	}

	cout<<str.substr(n);

	return 0;
}