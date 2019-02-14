// BinarySearch
#include <iostream>
using namespace std;

int BinarySearch(int a[],int n,int key){
	int s=0;
	int e=n-1;

	while(s<=e){
		int mid=(s+e)/2;
		if(a[mid]==key){
			return mid;
		}
		else if(a[mid]<key){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}

	return -1;
}

void PrintArray(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;	
}

int main(){
	int a[]={2,4,6,8,10,11,12};
	int n=sizeof(a)/sizeof(int);
	int key;
	PrintArray(a,n);
	while(1){
		cin>>key;
		int indx=BinarySearch(a,n,key);
		if(indx==-1){
			cout<<"Not Found!"<<endl;
		}
		else{
			cout<<"Found at index : "<<indx<<endl;
		}
	}







	
	return 0;
}