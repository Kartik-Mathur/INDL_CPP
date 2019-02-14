// Arrays
#include <iostream>
using namespace std;

void PrintArray(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;	
}

void inputArray(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
}

int ArraySum(int a[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+a[i];
	}
	return sum;
}

void SelectionSort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min_index=i;
		for(int j=i+1;j<n;j++){
			if(a[min_index]>a[j]){
				min_index=j;
			}
		}
		if(min_index!=i){
			swap(a[min_index],a[i]);
		}
	}
}

int main(){

	int a[100];
	int n;
	cout<<"Enter n : ";
	cin>>n;
	inputArray(a,n);
	PrintArray(a,n);

	SelectionSort(a,n);
	PrintArray(a,n);

	
	return 0;
}