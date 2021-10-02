//Stack operations using array
#define MAX 20
#include<bits/stdc++.h>

using namespace std;
class Stack{
	int data[MAX];
	int top;

	public :
		
		Stack(){
			top=-1;
		}
		
		int empty(){
			if(top==-1)
			return 1;
			return 0;			
		}
		
		int full(){
			if(top==MAX-1)
			return 1;
			return 0;
		}
		
		void push(int x){
			top=top+1; 
			data[top]=x;
			
		}
		
		int pop(int x){
			x=data[top];
			top--;
			return (x);	
		}		
};

int main(){
	Stack s;
	int option;
	cout<<"1-empty, 2-full"<<endl;
	cin>>option;
	switch(option){
		case 1:
			if(!s.empty()){
		cout<<"Stack is NOT empty"<<endl;
	}
		else{
		cout<<"Stack Underflow!!"<<endl;
		}
		
		break;
		
		case 2:
			if(!s.full()){
		
		cout<<"Stack is NOT full"<<endl;
	}
	
	else{
		cout<<"Stack Overflow"<<endl;
	}
	break;
		default : 
		cout<<"Enter appropriate option"<<endl;	
	}
	
	
	
	
	
	
	return 0;
}




