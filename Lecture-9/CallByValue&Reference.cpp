// CallByValue&Reference
#include <iostream>
using namespace std;

void fun(int &x,int &y){
	// swap(x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"In fun x : "<<x<<" y : "<<y<<endl;
}
int main(){
	int a=10,b=20;
	fun(a,b);

	cout<<"In main x : "<<a<<" y : "<<b<<endl;


	//REFERENCE VARIABLES :

	// int a=100;
	// int &b=a;
	// int &c=b;

	// a++;
	// b++;
	// c++;

	// cout<<a<<" "<<b<<" "<<c<<endl;

	return 0;
}