// OddEven
#include <iostream>
using namespace std;

void Odd(int n){
	// base case
	if(n==0){
		return;
	}

	// Recursive case
	Odd(n-1);
	if(n%2!=0){
		cout<<n<<" ";
	}

}

void even(int n,int i){
	// base case
	if(i>n){
		return;
	}

	// Recursive case
	if(i%2==0){
		cout<<i<<" ";
	}
	even(n,i+1);

}

int main(){
	int n;
	cin>>n;
	even(n,0);


	cout<<endl;
	return 0;
}