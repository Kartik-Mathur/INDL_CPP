// UpperandLower
#include <iostream>
using namespace std;

int main(){
	char ch;
	cin>>ch;

	if(ch>='a'&&ch<='z'){
		cout<<"lowercase"<<endl;
	}
	else if(ch>='A' && ch<='Z'){
		cout<<"UPPERCASE"<<endl;
	}
	else{
		cout<<"Invalid"<<endl;
	}

	cout<<endl;
	return 0;
}