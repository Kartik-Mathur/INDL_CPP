// Array
#include <iostream>
using namespace std;

void OddEven(int *a,int n,int i){
	if(i==n){
		return;
	}

	if(a[i]%2!=0){
		a[i]=a[i]+10;
		OddEven(a,n,i+1);
	}
	else{
		a[i]=a[i]-10;
		OddEven(a,n,i+1);
	}
}


int main(){
	int a[]={1,3,2,6,7,8};
	int n=sizeof(a)/sizeof(int);

	OddEven(a,n,0);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}



	cout<<endl;
	return 0;
}
