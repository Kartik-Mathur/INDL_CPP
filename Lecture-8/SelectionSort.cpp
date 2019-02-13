// SelectionSort
#include <iostream>
using namespace std;

int main(){
	int a[100];
	int n;
	cout<<"Enter N: ";
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Before Sorting : "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	for(int i=0;i<n-1;i++){
		int min_index=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min_index]){
				min_index=j;
			}
		}
		if(min_index!=i){
			int temp=a[min_index];
			a[min_index]=a[i];
			a[i]=temp;
		}
	}


	
	cout<<"After Sorting : "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;	











	return 0;
}