// AddressOfOperator
#include <iostream>
using namespace std;

int main(){


	int x=10;

	int &y=x; // reference variable 
	char ch='B';
	float f=10.12;

	cout<<&x<<endl;
	cout<<&f<<endl;
	cout<<&ch<<endl;


	cout<<endl;
	return 0;
}