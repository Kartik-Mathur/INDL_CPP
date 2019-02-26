// Check7
#include <iostream>
using namespace std;

bool Check7(int a[],int n,int i){
	// base case
	if(i==n){
		return false;
	}
	// Recursive Case
	if(a[i]==7){
		return true;
	}
	else{
		bool KyaChoteArrayMeiMilla=Check7(a,n,i+1);
		if(KyaChoteArrayMeiMilla==true){
			return true;
		}
		else{
			return false;
		}
	}
}


int main(){
	int a[]={1,2,7,3,4,5,6};
	int n=sizeof(a)/sizeof(int);

	bool ans=Check7(a,n,0);

	ans==true?cout<<"Found\n":cout<<"Not Found\n";



	return 0;
	
}