// BubbleSort
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
	// loop for n-1 iterations
	for(int i=0;i<n-1;i++){
		// starting from index 0 start comparison of pairs
		for(int j=0;j<=n-2-i;j++){
			if(a[j]>a[j+1]){
				// swap the elements;
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"After Sorting : "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;










	return 0;
}