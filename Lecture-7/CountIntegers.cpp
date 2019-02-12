// CountIntegers
// Count Number of Integers till we get -1 as the input
#include <iostream>
using namespace std;

int main(){

	int count=0;
	int n;
	cin>>n;

	while(n!=-1){
		count++;
		
		cin>>n;
	}

	cout<<count<<endl;




	return 0;
}