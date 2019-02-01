// Precedence
#include <iostream>
using namespace std;

int main(){

	int i=1;
	char ch='A';
	float f=10.01;

	cout<<i+1<<endl; // int + int = 2
	cout<<f+5<<endl; // float + int = 15.01
	cout<<ch+1<<endl;// char + int = int
	cout<<ch+ch<<endl; // char + char


	i=f+5;
	f=f+5;
	ch=ch+ch;
	cout<<i<<endl;
	cout<<f<<endl;
	cout<<ch<<endl;	


	return 0;
}