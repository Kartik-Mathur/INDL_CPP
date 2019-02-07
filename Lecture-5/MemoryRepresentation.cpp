// MemoryRepresentation
#include <iostream>
using namespace std;

int main(){
	// int n;
	// cin>>n;

	// cout<<n<<endl;
	// while(n>0){
	// 	cout<<(n&1);
	// 	n=n>>1;
	// }
	int mask=1;

	mask=mask<<7; // will make the 31st bit 1 and rest all will be zero
	char ch;
	cin>>ch;
	while(mask>0){
		if((mask&ch)==0){
			cout<<0;
		}	
		else{
			cout<<1;
		}
		mask=mask>>1;
	}




	cout<<endl;
	return 0;
}