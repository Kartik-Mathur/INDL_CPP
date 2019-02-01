// Mean
#include <iostream>
#include <climits>
using namespace std;

int main(){
	int n,no;
	cin>>n;

	int i=1,sum=0;
	int l=INT_MIN;
	int s=INT_MAX;
	while(i<=n){
		cin>>no;

		if(l<no){
			l=no;
		}
		if(s>no){
			s=no;
		}

		sum=sum+no;
		i=i+1;
	}
	cout<<sum/(n*1.0)<<endl;
	cout<<"Largest "<<l<<endl;
	cout<<"Smallest "<<s<<endl;

	cout<<endl;
	return 0;
}