// Fibonacci
#include <iostream>
using namespace std;

int fibo(int n){
	if(n==0||n==1){
		return n;
	}

	return fibo(n-1)+fibo(n-2);
	// int sm1=fibo(n-1);
	// int sm2=fibo(n-2);

	// int badaans=sm1+sm2;
	// return badaans;
}



int main(){
	int n;
	cin>>n;

	cout<<fibo(n)<<endl;
	




	return 0;
}

