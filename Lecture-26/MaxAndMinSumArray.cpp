// MaxAndMinSumArray
#include <iostream>
#include <climits>
using namespace std;

int main(){
	int n,k,t;
	int a[100005];
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		

		int i=0;
		int j=k-1;
		int ans=0;
		int min,max;

		while(j!=n){
			min=INT_MAX;max=INT_MIN;
			for(int k=i;k<=j;k++){
				if(a[k]<min){
					min=a[k];
				}
				if(max<a[k]){
					max=a[k];
				}
				//cout<<a[k]<<" ";
			}
			i++;j++;
			
			ans+=(min+max);
		}	
		cout<<ans<<endl;
	}
	
	return 0;
}