// Power
#include <iostream>
using namespace std;

int POWER(int x,int n){
	if(n==0){
		return 1;
	}

	return x*POWER(x,n-1);

	// int ChotaAns=POWER(x,n-1);
	// int BadaAns=x*ChotaAns;
	// return BadaAns;
}


int main(){
	int n,x;
	cin>>x>>n;
	cout<<POWER(x,n)<<endl;


	return 0;
}

