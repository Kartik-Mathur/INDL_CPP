// BitwiseOperator
#include <iostream>
using namespace std;

int main(){

	// cout<<(5&7)<<endl;
	// cout<<(5|7)<<endl;
	// cout<<(5^7)<<endl;
	// cout<<(5&1)<<endl;
	// cout<<(6&1)<<endl;
	
	int n;
	cin>>n; // 16

	while(n>0){
		cout<<n<<endl;
		n=n>>1;
	}

	n=n<<4;
	cout<<n<<endl;








	cout<<endl;
	return 0;
}