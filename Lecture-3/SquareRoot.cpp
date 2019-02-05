// SquareRoot
#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number to find its sqrt : ";
	cin>>n;

	// int i=0;
	// while(i*i<=n){
	// 	i=i+1;
	// }
	// i=i-1;
	// cout<<"Integer Part is : "<<i<<endl;
	int decimalPoint=2;
	// cin>>decimalPoint; // this tells till how many 
	// decimal point we need an answer
	int current_precision=0;

	float i=0; // because ans is floating point
	float inc=1;
	while(current_precision<=decimalPoint){
		while(i*i<=n){
			i=i+inc;
		}
		i=i-inc;
		inc=inc/10;	
		current_precision=current_precision+1;
	}
	cout<<"Ans : "<<i<<endl;

	return 0;
}