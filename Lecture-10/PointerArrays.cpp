// PointerArrays
#include <iostream>
using namespace std;

void print(int a[],int n){

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void print1(int *aptr,int n){

	for(int i=0;i<n;i++){
		cout<<*(aptr+i)<<" "<<aptr[i]<<" ";
	}
	cout<<endl;
}

int main(){

	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(int);

	print(a+2,n-2);
	print1(a+1,n-1);

	cout<<endl;
	return 0;
}