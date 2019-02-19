// ReverseAnArray
#include <iostream>
using namespace std;


void Reverse(int a[],int n){
	int i=0;
	int j=n-1;
	while(i<j){
		swap(a[i],a[j]);
		i++;
		j--;
	}
}
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void Reverse1(int *a,int n){
	int i=0;
	int j=n-1;
	while(i<j){
		int temp=*(a+i);
		*(a+i)=*(a+j);
		*(a+j)=temp;
		i++;
		j--;
	}
}

// int *fun1(){
// 	int i=100;

// 	return &i;	
	// should not be done
// }



int main(){
	int a[]={1,2,3,4,5,6};
	int b[]={1,2};
	int n=sizeof(a)/sizeof(int);
	int *ptr=a;
	// a=b;

	cout<<sizeof(a)<<endl;
	cout<<sizeof(ptr)<<endl;

	Reverse(a,n);	
	print(a,n);
	Reverse1(a,n);
	print(a,n);

	cout<<endl;
	return 0;
}