// EvenOdd
#include <iostream>
using namespace std;

int main(){

	int n;
	cout<<"Enter n: ";
	cin>>n;

	int i=1;
	cout<<"Even Numbers : ";
	while(i<=n){
		if(i%2==0){
			cout<<i<<" ";
		}

		i=i+1;
	}
	cout<<endl;
	i=1;
	cout<<"Odd Numbers : ";
	while(i<=n){
		if(i%2!=0){
			cout<<i<<" ";
		}

		i=i+1;
	}




	cout<<endl;
	return 0;
}