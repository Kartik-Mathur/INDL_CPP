// N_StairCase
#include <iostream>
using namespace std;

int stairs(int n){
	if(n<0){
		return 0;
	}
	if(n==0){
		return 1;
	}

	return stairs(n-1)+stairs(n-2)+stairs(n-3);

}


int stairs1(int n,int k=3){
	if(n<0){
		return 0;
	}
	if(n==0){
		return 1;
	}

	int ans=0;
	for(int i=1;i<=k;i++){
		ans+=stairs1(n-i,k);
	}
	return ans;
}

int main(){
	int n;
	cin>>n;

	cout<<stairs(n)<<endl;
	cout<<stairs1(n)<<endl;

	return 0;
}