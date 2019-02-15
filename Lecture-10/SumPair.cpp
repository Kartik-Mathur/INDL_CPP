#include <iostream>
using namespace std;
void PrintPairs(int a[],int n,int s){

	for(int i=0;i<n;i++){
		int e1=a[i];
		int e2=s-e1;
		for(int j=i+1;j<n;j++){
			if(e2==a[j]){
				cout<<e1<<","<<e2<<endl;
			}
		}
	}
}
void PrintPairs1(int a[],int n,int s){
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==s){
				cout<<a[i]<<","<<a[j]<<endl;
			}
		}
	}
}

int main(){
	int a[]={1,2,3,3,4,5,6};
	int n=sizeof(a)/sizeof(int);

	int s;
	cin>>s;

	PrintPairs(a,n,s);
	cout<<endl;
	PrintPairs1(a,n,s);

	cout<<endl;
	return 0;
}