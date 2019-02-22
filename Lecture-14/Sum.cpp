#include <iostream>
using namespace std;

int SUM(int n){
	// base case 
	if(n==0){
		return 0;
	}

	int Chotaans=SUM(n-1);
	int Badaans=n+Chotaans;
	return Badaans;
}

int SUM1(int a[],int n){
	if(n==0){
		return 0;
	}

	int Chotaans=SUM1(a+1,n-1);

	return a[0]+Chotaans;
}



int main(){
	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(int);

	cout<<SUM1(a,n)<<endl;

	return 0;
}

