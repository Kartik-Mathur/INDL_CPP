// MultiplyTwoNumbers
#include <iostream>
using namespace std;

int multiply(int a,int b){
	// base case
	if(b==0){
		return 0;
	}

	// Recursive case
	int chotaAns=multiply(a,b-1);
	return a+chotaAns;
}


int main(){
	int a;
	int b;
	cin>>a>>b;

	cout<<multiply(a,b)<<endl;
	


	return 0;
}