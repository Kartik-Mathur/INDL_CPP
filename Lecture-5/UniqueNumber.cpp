#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n; // NUMBERS that user will enter
	int ans=0;
	int j=1,no;
	while(j<=n){	
		
		cin>>no;	
		ans=ans^no;

		j++;
	}
	cout<<ans<<endl;




	cout<<endl;
	return 0;
}