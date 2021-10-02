#include<iostream>
#include<conio.h>
#define MAX 10
#define TRUE 1
#define FALSE 0
using namespace std;
class stack{
	
	int data[];
	int top;
	
	public :
		
		void Initialize(){
			top=-1;
		}
		
		int Empty(){
			if(top==-1)
			{
				return TRUE;
			}
			
			return FALSE;
		}
		
		int Full(){
			if (top==MAX-1){
				return TRUE;
			}
			
			return FALSE;
		}
		
		int push(int x){
			top = top+1;
			data[top]=x;
			// or data[++top]=x; 
		}
		
		int pop(int x){
			x=data[top];
			data[top]=data[top-1];
			return (x);
		}
};


 int main(){
	
	stack s;
	int x;
 	s.Initialize();
	cout<<"\nEnter a number : ";
	cin>>x;
	while(x != 0){
		if (!s.Full()){
			s.push(x%2);
			x=x/2;
		}
		
		else{
			cout<<"\nStack is Full";
			return 0;
			exit(0);
		}
		
		//Display the result
		cout<<"\n Binary Equivalent is : ";
		while(!s.Empty()){
			cout<<s.pop();
		}	
	}
	
	return 0;
}
