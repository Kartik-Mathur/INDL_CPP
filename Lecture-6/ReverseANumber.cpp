// ReverseANumber
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int ans=0;
	for(;n>0;n/=10){
		// cout<<n%10;
		ans=ans*10+n%10;
	}	
	cout<<ans<<endl;
	cout<<ans+10;


	cout<<endl;
	return 0;
}