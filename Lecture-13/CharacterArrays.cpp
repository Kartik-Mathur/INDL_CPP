// CharacterArrays
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char a[100];
	cin.getline(a,100);

	cout<<strlen(a)<<endl; // length(a)
	char b[100];
	strcpy(b,a);
	cout<<a<<endl<<b<<endl;
	cout<<strlen(b)<<endl; // length(a)

	strcat(a,b);
	cout<<a<<endl;
	cout<<strlen(a)<<endl; // length(a)




	return 0;
}

