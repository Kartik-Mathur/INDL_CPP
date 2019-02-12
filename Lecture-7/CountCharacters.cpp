// input: abcde@#$ output: 7

#include <iostream>
using namespace std;

int main(){
	int count=0;
	char ch;

	// cin>>ch; // Initialization
	ch=cin.get();
	while(ch!='$'){ // condition check
		count++;
		// cin>>ch;
		ch=cin.get();
	}

	cout<<count<<endl;

	return 0;
}