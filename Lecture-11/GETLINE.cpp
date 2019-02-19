#include <iostream>
using namespace std;

int main(){
	char a[100];
	// cin.getline(name_of_chararray,sizeof_array,delimiter);
	// By default delimiter : '\n'
	cin.getline(a,100,'$');
	cout<<a<<endl; 



	return 0;
}