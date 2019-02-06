#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int line=1;
	while(line<=n){
		// Print decreasing characters
		char ch='a'+line-1;
		int j=1;
		while(j<=line-1){
			cout<<ch<<" ";
			ch=ch-1;
			j=j+1;
		}

		ch='a';
		j=1;
		while(j<=n-line+1){
			cout<<ch<<" ";
			ch=ch+1;
			j=j+1;
		}

		cout<<endl;
		line=line+1;

	}


	cout<<endl;
	return 0;
}