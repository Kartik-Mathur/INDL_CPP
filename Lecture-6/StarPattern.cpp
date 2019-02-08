// StarPattern
#include <iostream>
using namespace std;

int main(){

	int n,j;
	cin>>n;

	for(int line=1;line<=n;line++){

		for(j=1;j<=n-line;j++){
			int i;
			cout<<" ";
		}

		for(j=1;j<=2*line-1;j++){
			cout<<"*";
		}	

		cout<<endl;

	}


	cout<<endl;
	return 0;
}