// PrintAllPrime
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int number,i;
	if(n==2){
		cout<<2;
		return 0;
	}
	cout<<2;
	for(number=3;number<=n;number++){

		for(i=2;i<=number-1;i++){

			if(number%i==0){
				break;
			}

		}
		if(i==number){
			cout<<", "<<number;
		}
	}

	// cout<<"\b \b"<<"\b \b"; // used to backspace


	cout<<endl;
	return 0;
}