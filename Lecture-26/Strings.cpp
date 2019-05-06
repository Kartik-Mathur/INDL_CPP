// Strings
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long 

bool Compare(char* a,char* b){
	int i=0;
	int j=0;
	while(a[i]!='\0' && b[j]!='\0'){
		if(a[i]>b[j]){
			return true;
		}
		else if(a[i]<b[j]){
			return false;
		}
		else{
			i++;
			j++;
		}
	}
	if(a[i]=='\0'){
		return true;
	}

	return false;
}


void SSORT(char a[][100],int n){
	char temp[100];
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			// cout<<a[j]<<","<<a[j+1]<<endl;
			if(Compare(a[j],a[j+1])){
				swap(a[j],a[j+1]);
			}
		}
	}
}

bool comparator(int a,int b){
	if(a>b){
		return true;
	}
	return false;
}

bool comp(string a,string b){
	if(a<b){
		return true;
	}
	return false;
}


int main(){

	// int a[]={5,4,3,2,1};
	// int n=5;
	// for(int i=0;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;
	// sort(a,a+n,comparator);

	// for(int i=0;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;



	// char a[][100]={
	// 	"hello","strings","world","bat","batman"
	// };
	string a[10]={"hello","strings","world","bat","batman"};
	int n=5;
	for(int i=0;i<n;i++){
		cout<<a[i]<<", ";
	}
	cout<<endl<<endl;
	// SSORT(a,n);
	sort(a,a+n,comp);
	cout<<"After Sort:"<<endl;

	for(int i=0;i<n;i++){
		cout<<a[i]<<", ";
	}	
	cout<<endl;

	
	
	return 0;
}