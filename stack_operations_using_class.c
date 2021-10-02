// changes

//Stack operations using array (using class)
#define MAX 20
#include<stdlib.h>
#include<conio.h>
class stack{

	int data[MAX];
	int top;
		public :
	
		void initialize(){
			top-=1;
		}
		
		int empty(){
			if(top==-1)
			return 1;
			return 0;
		}
		
		int full(){
			if (top==MAX-1)
			return 1;
			return 0;
		}
		
		
		void push(int x){
			top+=1;
			data[i]=x;
		}
		
		int pop(int x){
			x=data[];
			top-=1;
		}
		
		void display(){
			if(int i=MAX;i>=0;i--){
			cout<<data[i]<<", ";			
			}
		}
		
		
};


int main(){
	stack s;
	s.initialize();
	
	
	s.display();
	s.push(5);
	
}
