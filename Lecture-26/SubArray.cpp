#include <iostream>
using namespace std;
#include <climits>
#define ll long long 

int main(){
	int a[10000];
	// int n=sizeof(a)/sizeof(int);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max=INT_MIN,ans;

	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			ans=0;
			for(int k=i;k<=j;k++){
				ans = ans ^ a[k];
			}
			if(ans>max){
				max=ans;
			}
		}
	}
	cout<<max<<endl;
	
	
	return 0;
}