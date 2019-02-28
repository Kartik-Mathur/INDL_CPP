// Pattern
#include <iostream>
using namespace std;

void Pattern(int n,int line){
	if(line==n){
		return;
	}

	for(int i=1;i<=line+1;i++){
		cout<<'*';
	}
	cout<<endl;

	Pattern(n,line+1);
}

void Pattern2(int n,int line){
	// base case
	if(line==n){
		return;
	}

	// Recursive case	
	for(int i=1;i<=n-line;i++){
		cout<<"*";
	}
	cout<<endl;
	Pattern2(n,line+1);
}


int main(){
	int n;
	cin>>n;
	Pattern(n,0);
	cout<<endl;
	Pattern2(n,0);

	cout<<endl;
	return 0;
}