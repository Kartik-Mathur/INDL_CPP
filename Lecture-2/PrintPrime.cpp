// PrintPrime
#include <iostream>
using namespace std;

int main(){
	cout<<"Enter a Number : ";
	int n;
	cin>>n;

	int j=2;
	while(j<=n-1){ // or j<n, j<n is equilvalent to j<=n-1
		if(n%j==0){
			cout<<"Not Prime"<<endl;
			break;
		}

		j=j+1;
	}
	// When we are outside the loop that means that
	// we have divided n by each number belonging to
	// [2,n-1] but it is not divided by any of them
	// so we will come outside the loop. 
	// That means the number is prime 
	if(j==n){
		cout<<"Prime"<<endl;
	}

	int j=1;
	while(j<=n){
		if(j==2){
			cout<<"J is 2"<<endl;
			j=j+1;
			continue;
		}
		cout<<j<<" ";
		j=j+1;
	}


	return 0;
}