// DMA
#include <iostream>
using namespace std;

int main(){
	int *a=new int;
	*a=10;
	cout<<*a<<endl;	
	*a=100;
	cout<<*a<<endl;	
	delete a;

	int n;
	cout<<"Enter n ";
	cin>>n;

	int *arr=new int[n];
	for(int i=0;i<n;i++){
		arr[i]=i;
	}

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}	

	delete []arr;
	cout<<endl;



	return 0;
}