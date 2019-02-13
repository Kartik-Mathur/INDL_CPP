// Functions
#include <iostream>
using namespace std;

// syntax:

// datatype function_name(arguments/parameter){

// }

// FORWARD DECLARATION
// void PrintHelloWorld();
void PrintHelloWorld(){
	cout<<"Hello World!"<<endl;
	return;
}

void PrintNumber(int);


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
	PrintHelloWorld(); //Function calling
	PrintNumber(10);
	CheckPrime(100);
	return 0;
}

void PrintNumber(int n){
	cout<<n<<endl;
	return;
}


