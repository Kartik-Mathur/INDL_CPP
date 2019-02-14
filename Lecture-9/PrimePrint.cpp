// PrimePrint
#include <iostream>
using namespace std;

bool checkPrime(int n){

	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

void PrintPrime(int n){
	// Go to every number from 2-N
	for(int i=2;i<=n;i++){
		// check every i prime or not
		if(checkPrime(i)==true){	
			cout<<i<<" ";
		}
	}
	cout<<endl;
}



int main(){
	int n;
	cin>>n;

	PrintPrime(n);
	
	return 0;
}