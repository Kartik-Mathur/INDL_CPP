// SumFunction
#include <iostream>
using namespace std;

void sum1(int a,int b){
	cout<<"SUM : "<<a+b<<endl;
	
	return;
}

int sum2(int a,int b){
	// int ans=a+b;
	// return ans;

	return (a+b);
}

bool Great(int a,int b){
	if(a>b){
		return true;
	}
	else{
		return false;
	}
}

void CheckPrime(int x){

	int i;
	for(i=2;i<x;i++){
		if(x%i==0){
			cout<<"Not PRIME"<<endl;
			break;
		}
	}

	if(i==x){
		cout<<"Prime"<<endl;
	}	
	return;
}



int main(){
	int x,y;
	cin>>x;
	y=10;

	CheckPrime(x);

	sum1(x,y);

	int ans=sum2(x,y); // sum2(x,y): returned ans so store it in a bucket
	cout<<ans<<endl;
	
	if(Great(x,y)==true){
		cout<<x<<" is greater than "<<y<<endl;
	}
	else{
		cout<<y<<" is greater than "<<x<<endl;
	}

	return 0;
}