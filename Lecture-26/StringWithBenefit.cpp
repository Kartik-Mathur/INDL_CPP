// StringWithBenefit
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long 

bool compare(int a,int b){
	return a>b;
}

int main(){
	int t,k;
	cin>>t;
	char a[10000];
	while(t--){
		int freq[27]={0};

		cin>>a;
		cin>>k;

		for(int i=0;a[i]!='\0';i++){
			freq[a[i]-'a']++;
		}
		
		while(k--){
			sort(freq,freq+26,compare);
			if(freq[0]==0){
				break;
			}
			freq[0]--;
		}
		int ans=0;
		for(int i=0;i<26;i++){
			ans = ans + freq[i]*freq[i];
		}


		cout<<ans<<endl;

	}
	
	return 0;
}