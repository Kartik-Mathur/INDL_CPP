// StringToInt
#include <iostream>
using namespace std;

int StringToInt(char a[],int n){
	// base case
	if(n==0){
		return 0;
	}

	// Recursive case
	int last_digit=a[n-1]-'0';
	int ChotaAns=StringToInt(a,n-1);
	return ChotaAns*10+last_digit;
}


int main(){
	
	char a[10]="2048";

	cout<<StringToInt(a,4)<<endl;


	return 0;
}