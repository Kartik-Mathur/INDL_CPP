// Mirror1
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	int line=0;
	while(line<=n){
		// Print spaces
		int spaces=1;
		while(spaces<=n-line){
			cout<<" ";
			spaces=spaces+1;
		}	
		// Print 0
		cout<<"0";

		// Print inc characters
		char ch='A';
		int j=1;
		while(j<=line){
			cout<<ch;
			ch=ch+1;

			j=j+1;
		}

		// Print decreasing characters
		ch=ch-2;
		while(ch>='A'){
			cout<<ch;
			ch=ch-1;
		}
		if(line!=0){
			cout<<"0";
		}
		cout<<endl;
		line=line+1;
	}

	line=1;
	while(line<=n){
		int spaces=1;
		while(spaces<=line){
			cout<<" ";
			spaces=spaces+1;
		}
		cout<<"0";

		char ch='A';
		int j=1;
		while(j<=n-line){
			cout<<ch;
			ch=ch+1;
			j=j+1;
		}
		ch=ch-2;
		while(ch>='A'){
			cout<<ch;
			ch=ch-1;
		}
		if(line!=n){
			cout<<"0";
		}

		cout<<endl;

		line=line+1;
	}



	cout<<endl;
	return 0;
}