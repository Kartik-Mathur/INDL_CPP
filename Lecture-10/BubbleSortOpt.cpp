// BubbleSortOpt
#include <iostream>
using namespace std;

void BubbleSort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int count=0;
		for(int j=0;j<=n-2-i;j++){
			if(a[j]>a[j+1]){
				count++;
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}

		if(count==0){
			break;
		}

	}	
}


int main(){

	int a[]={5,1,2,3,4};
	int n=sizeof(a)/sizeof(int);




	cout<<endl;
	return 0;
}