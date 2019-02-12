#include <iostream>
using namespace std;

int a=500;

int main(){


	int a=10;

	cout<<::a<<endl; // Scope Resolution operator ::
	// :: scope resolution operator skips all the local scopes
	// and looks directly in the global scope
	::a=::a+100;
	cout<<::a<<endl;



//--------------------------------------------------
	// int i=100;
	// for(i=0;i<=10;i++){

	// }
	// cout<<i<<endl;
//--------------------------------------------------
//--------------------------------------------------
	// int a=10;

	// if(a){
	// 	int j=50;
	// 	cout<<j<<endl;
	// }
	// cout<<j<<endl; 
//--------------------------------------------------


	return 0;
}