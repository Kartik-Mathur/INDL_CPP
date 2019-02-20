// RotateString
#include <iostream>
using namespace std;

int length(char *a){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

void RotateString(char *a,int n){

	int j=length(a)-1;
	int l=length(a);
	while(j>=0){
		a[j+n]=a[j];
		j--;
	}
	// cout<<a<<endl;
	j=l;
	int i=0;

	for(int k=0;k<n;k++){
		a[i]=a[j];
		i++;
		j++;
	}
	// cout<<a<<endl;
	a[l]='\0';
	// cout<<a<<endl;

}


int main(){

	char a[100];
	int n;

	cin>>a;
	cin>>n;

	RotateString(a,n);
	cout<<a<<endl;






	return 0;
}