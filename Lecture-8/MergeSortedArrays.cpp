// MergeSortedArrays
#include <iostream>
using namespace std;

int main(){
	int a[7]={1,3,5};
	int b[4]={2,5,6,8};
	int m=3;
	int n=4;

	// m=3, n=4, m+n=7

	int i=m-1;
	int j=n-1;
	int k=m+n-1;

	while(i>=0 && j>=0){
		if(b[j]>a[i]){
			a[k]=b[j];
			k--;
			j--;
		}		
		else{
			a[k]=a[i];
			k--;
			i--;
		}
	}

	if(j>=0 && i<0){
		while(j>=0){
			a[k]=b[j];
			k--;
			j--;
		}
	}
	else{
		while(i>=0){
			a[k]=a[i];
			k--;
			i--;
		}
	}

	for(int i=0;i<7;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	
	return 0;
}