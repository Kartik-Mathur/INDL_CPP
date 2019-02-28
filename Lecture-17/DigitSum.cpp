// DigitSum
#include <iostream>
using namespace std;

int SUM(int n){
	// base case
	if(n==0){
		return 0;
	}

	// recursive case
	int digit=n%10;
	int chotaAns=SUM(n/10);
	return digit+chotaAns;

}


int main(){
	int n;
	cin>>n;

	cout<<SUM(n);

	cout<<endl;
	return 0;
}