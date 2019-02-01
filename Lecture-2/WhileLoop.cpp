// WhileLoop
#include <iostream>
using namespace std;

int main(){
	int j=1;
	int n;

	cout<<"Enter N: "; // To print on console
	cin>>n; // To take input from user
	// Print increasing numbers
	int i=1; // Initialization
	while(i<=n){
		cout<<i<<" ";

		i=i+1; // Updation
	}
	cout<<endl;
	
	// Print Decreasing Numbers
	i=n;
	while(i>=1){
		cout<<i<<" ";

		i=i-1;
	}



	cout<<endl;
	return 0;
}