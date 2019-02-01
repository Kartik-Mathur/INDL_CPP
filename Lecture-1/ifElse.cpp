// ifElse
#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;

	if(n%2==0){	
		cout<<"Even"<<endl;
	}
	else{
		cout<<"Odd"<<endl;
	}

	int a,b,c;
	cin>>a>>b>>c;

	if(a>=b && a>=c){
		cout<<a;
		cout<<" is the Largest ";
		cout<<endl;
	}
	else if(b>=a && b>=c){
		cout<<"Largest "<<b<<endl;
	}
	else{
		cout<<"Largest "<<c<<endl;
	}

	return 0;
}