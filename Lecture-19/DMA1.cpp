// DMA1
#include <iostream>
using namespace std;

int* CreateArray(int n){
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		arr[i]=i*10;
	}	
	return arr;
}

int main(){

	int r,c;
	cout<<"Enter r and c ";
	cin>>r>>c;

	int **a;
	a=new int*[r];

	for(int i=0;i<r;i++){
		a[i]=new int[c];
	}

int number=1;

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			a[i][j]=number;
			number++;
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	for(int i=0;i<r;i++){
		delete []a[i];
	}
	delete []a;
	// int *a=CreateArray(n);

	// for(int i=0;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }	




	delete []a;
	cout<<endl;
	return 0;
}