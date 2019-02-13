// Arrays
#include <iostream>
using namespace std;

int main(){

	int c[1000]={1}; // THIS DOESNOT ALLOCATE EACH INDEX WITH VALUE 1
	int d[1000]={0}; // THIS ALLOCATES EACH BUCKET WITH 0



	int b[]={1,2,3,4,5,6,7}; // Initialization of the array
	cout<<sizeof(b)<<endl;
	int n=sizeof(b)/sizeof(int);
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;

	int a[1000]={6,7,8,9,10};
	cout<<sizeof(a)/sizeof(int)<<endl;

// THIS SHOULD NOT BE DONE

	// int n;
	// cin>>n;
	// int a[n];

	// for(int i=0;i<100;i++){
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;	
	// int n;

// 	cout<<"Enter N(max 1000) : ";
// 	cin>>n;
// // Taking input from the user inside the array
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}

// 	for(int i=0;i<n;i++){
// 		cout<<a[i]<<" ";
// 	}

	// for(int i=0;i<=10;i++){
	// 	a[i]=i;
	// }

	// for(int i=0;i<=10;i++){
	// 	cout<<a[i]<<" ";
	// }
	cout<<endl;


	// a[0]=10;
	// a[1]=100;
	// a[999]=500;

	// cout<<a[0]<<" "<<a[1]<<endl;
	// cout<<a[999]<<endl;
	// cout<<a[2]<<endl;

	return 0;
}