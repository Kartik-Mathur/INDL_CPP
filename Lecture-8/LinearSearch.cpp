// LinearSearch
#include <iostream>
using namespace std;

int main(){

	int a[]={1,4,3,5,6,7,8,9,11,-1};
	int n=sizeof(a)/sizeof(int);

	int key;
	cout<<"Enter the element to be searched : ";
	cin>>key;
	int i;

	for(i=0;i<n;i++){
		if(a[i]==key){
			cout<<"Key found at index : "<<i<<endl;
			break;
		}
	}

	if(i==n){
		cout<<"Key, Not Found!"<<endl;
	}




	return 0;
}