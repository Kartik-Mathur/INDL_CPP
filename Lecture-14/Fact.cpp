// Fact
#include <iostream>
using namespace std;

int fact(int n){
	//base case
	if(n==0){
		return 1;
	}
	//ASSUMPTION
	int ChotaAnswer=fact(n-1);

	// Calculate the bigger ans
	int BadaAnswer=n*ChotaAnswer;


	return BadaAnswer;
}


int main(){

	int n;
	cin>>n;

	cout<<fact(n)<<endl;




	return 0;
}

