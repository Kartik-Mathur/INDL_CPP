// SelectionSort
#include <iostream>
using namespace std;

void SelectionSort(int *a,int n,int i){
	if(i==n-1){
		return;
	}
	
	int mi=i;
	for(int j=i+1;j<=n-1;j++){
		if(a[j]<a[mi]){
			mi=j;
		}
	}
	swap(a[i],a[mi]);
	SelectionSort(a,n,i+1);
}


int main(){
	int a[]={5,4,0,1,2};
	int n=sizeof(a)/sizeof(int);

	SelectionSort(a,n,0);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;


	cout<<endl;
	return 0;
}