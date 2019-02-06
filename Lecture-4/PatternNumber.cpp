// PatternNumber
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int num=n;

	int cnt=0;
	while(n>0){
		n=n/10;
		cnt=cnt+1;
	}
	// cout<<cnt;
	int line=1;
	int ans=0;
	n=num;
	while(line<=cnt){
		int rem=n%10;
		ans=ans*10+rem;
		n=n/10;
		cout<<ans;

		cout<<endl;
		line=line+1;	
	}








	cout<<endl;
	return 0;
}