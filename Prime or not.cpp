//checking prime or not
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	bool flag;
	
	for (int i=2;i<n;i++){
		if(n%i==0){
			cout<<"Non-Prime";
			flag = 1;
			break;
		}
	}
	
	if (flag==0){
		cout<<"Prime"<<endl;
	}
	
	return 0;
}
