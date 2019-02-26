// BinarySearch
#include <iostream>
using namespace std;

int BinarySearch(int a[],int s,int e,int key){
	// base case
	if(s>e){
		return -1;
	}

	// Recursive case
	int mid=(s+e)/2;
	if(a[mid]==key){
		return mid;
	}
	else if(a[mid]>key){
		return BinarySearch(a,s,mid-1,key);
	}
	else{
		return BinarySearch(a,mid+1,e,key);
	}
}


int main(){
	int a[]={1,3,4,5,6,7,8,9};
	int n=sizeof(a)/sizeof(int);
	int key;
	cin>>key;

	cout<<BinarySearch(a,0,n-1,key)<<endl;

	return 0;
}