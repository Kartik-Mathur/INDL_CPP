// PrimeTillN
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	// go to everynumber till n starting from 2

	int number=2;
	while(number<=n){
		// check every number prime or not
		// thus it should not be divisible by any number between
		// [2,number-1]
		int i=2;
		while(i<=number-1){
			if(number%i==0){
				break;
			}
			i=i+1;
		}
		if(i==number){
			cout<<number<<" ";
		}
		number=number+1;
	}



	cout<<endl;
	return 0;
}