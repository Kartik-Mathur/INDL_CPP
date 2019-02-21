// Strings
#include <iostream>
using namespace std;

int main(){
	// INITIALIZE STRING ------------------------------
	string s="Hello Coding Blocks";
	string s1("We are learning strings");
	char a[]="Hello World!";
	string s2(a);
	// ------------------------------------------------
	cout<<s<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;

	// PRINT -----------------------------------
	for(int i=0;s[i]!='\0';i++){
		cout<<s[i]<<" ";
	}
	cout<<endl;
	//------------------------------------------
	cout<<s.length()<<endl;

	s="Apple and Mango are fruits";
	cout<<s<<endl;
	// cin>>s;
	// getline(cin,s,'$');
	// cout<<s<<endl;
	cout<<s<<endl;

	return 0;
}

