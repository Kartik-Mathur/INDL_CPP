// Pointer
#include <iostream>
using namespace std;


int main(){
	int a=10;
	float f=10.12;
	char ch='A';

	//int *aptr=&a; // Initilization
	int* aptr;
	aptr=&a; // assignment
	float *fptr=&f;
	char *chptr=&ch;
	*aptr=20;

	cout<<(aptr)<<endl;
	cout<<a<<endl;
	cout<<(*aptr)<<endl;

	int *bptr=NULL; // Should not be done as it will point to garbage
	// memory location

	cout<<*bptr<<endl;









	// cout<<aptr<<endl;
	// cout<<fptr<<endl;
	// cout<<(void*)chptr<<endl;
	// cout<<(int*)chptr<<endl;
	// cout<<(float*)(chptr+1)<<endl;














	return 0;
}