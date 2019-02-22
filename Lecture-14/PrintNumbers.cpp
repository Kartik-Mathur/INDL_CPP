// PrintNumbers
#include <iostream>
using namespace std;

void Print(int n){
	if(n==0){
		return;
	}

	cout<<n<<" ";
	Print(n-1);
}

void Print1(int n, int i){
	if(i==n){
		cout<<i;
		return;
	}

	cout<<i<<" ";

	Print1(n,i+1);
}

// void Print1(int n, int i){
// 	if(i==n+1){
// 		return;
// 	}

// 	cout<<i<<" ";

// 	Print1(n,i+1);
// }

// void Print1(int n, int i){
// 	if(i==n){
// 		return;
// 	}

// 	cout<<i+1<<" ";

// 	Print1(n,i+1);
// }

int main(){

	int n;
	cin>>n;

	Print(n);
	cout<<endl;
	Print1(n,0);


	cout<<endl;

	return 0;
}

