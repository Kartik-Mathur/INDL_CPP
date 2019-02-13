// LargestNumber
#include <iostream>
#include <climits>
using namespace std;

int main(){

	int a[]={1,4,3,5,6,7,8,9,11,-1};
	int n=sizeof(a)/sizeof(int);	
// WAY-1
	// int largest=a[0];

	// for(int i=1;i<n;i++){
	// 	if(largest<=a[i]){
	// 		largest=a[i];
	// 	}	
	// }

// WAY-2
	int largest=INT_MIN;
	for(int i=0;i<n;i++){

		if(largest<a[i]){
			largest=a[i];
		}
	}
	cout<<"Largest : "<<largest<<endl;


	return 0;
}