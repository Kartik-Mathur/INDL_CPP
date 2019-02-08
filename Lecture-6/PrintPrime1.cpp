// PrintPrime1
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int number,i;
	
	for(number=2;number<=n;number++){

		for(i=2;i<=number-1;i++){

			if(number%i==0){
				break;
			}

		}
		if(i==number){
			cout<<number<<",";
		}
	}

	// cout<<"\b \b"<<"\b \b"; // used to backspace


	cout<<endl;
	return 0;
}