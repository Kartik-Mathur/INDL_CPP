// CallByReference
#include <iostream>
using namespace std;

// void fun(int x,int y){

// 	int temp=x;
// 	x=y;
// 	y=temp;

// 	cout<<"In fun "<<x<<" and "<<y<<endl;
// }

void fun(int* x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
	cout<<"In fun "<<*x<<" and "<<*y<<endl;
}

int main(){
	int a=10,b=20;
	fun(&a,&b);
	cout<<"In Main "<<a<<" and "<<b<<endl;

	cout<<endl;
	return 0;
}