#include <iostream>
using namespace std;

int first7(int a[],int n,int i){
	if(i==n){
		return -1;
	}

	// Recursive case
	if(a[i]==7){
		return i;
	}
	else{
		int indx=first7(a,n,i+1);
		return indx;
	}

}

int last7(int a[],int n,int i){
	if(i==n){
		return -1;
	}


	// Recursive case
	if(a[i]==7){
		int puranaIndx=i;
		int AageWalaIndx=last7(a,n,i+1);

		if(puranaIndx>AageWalaIndx){
			return puranaIndx;
		}
		else{
			return AageWalaIndx;
		}

	}
	else{
		int indx=last7(a,n,i+1);
		return indx;
	}


}



int main(){
	
	int a[]={1,2,4,5,6};
	int n=sizeof(a)/sizeof(int);

	cout<<last7(a,n,0)<<endl;

	return 0;
}