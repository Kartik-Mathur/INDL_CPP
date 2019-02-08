// Pattern1
#include <iostream>
using namespace std;

int main(){

	int n,no=1;
	cin>>n;

	for(int line=1;line<=n;line++){

		for(int j=1;j<=line;j++){
			cout<<no<<" ";
			no++;
		}

		cout<<endl;

	}


	cout<<endl;
	return 0;
}