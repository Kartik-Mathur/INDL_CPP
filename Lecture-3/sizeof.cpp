// sizeof
#include <iostream>
using namespace std;

int main(){
	cout<<sizeof(int)<<endl;
	cout<<sizeof(char)<<endl;
	cout<<sizeof(float)<<endl;
	cout<<sizeof(bool)<<endl;

	int a=100000;
	char ch='+';
	float b=10.532;
	cout<<"a : "<<sizeof(a)<<endl;
	cout<<"ch : "<<sizeof(ch)<<endl;
	cout<<"b : "<<sizeof(b)<<endl;


	cout<<endl;
	return 0;
}