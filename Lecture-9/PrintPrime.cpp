#include <iostream>
using namespace std;

void PrintPrime(int n){
	int j;
	for(int i=2;i<=n;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}
		if(i==j){
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