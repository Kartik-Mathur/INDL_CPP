// ReplacePi
#include <iostream>
using namespace std;

void ReplacePi(char *a,int i){
	// base case
	if(a[i]=='\0'){
		return;
	}

	// Recursive case
	if(a[i]=='p' && a[i+1]=='i'){
		cout<<3.14;
		ReplacePi(a,i+2);
	}
	else{
		cout<<a[i];
		ReplacePi(a,i+1);
	}
}

void StorePi(char *a,int i,char *out,int j){
	// Base case
	if(a[i]=='\0'){
		out[j]='\0';
		return;
	}

	// Recursive case
	if(a[i]=='p' && a[i+1]=='i'){
		out[j]='3';out[j+1]='.';out[j+2]='1';out[j+3]='4';
		StorePi(a,i+2,out,j+4);
	}
	else{
		out[j]=a[i];
		StorePi(a,i+1,out,j+1);
	}
}





int main(){
	char a[100],out[100];
	cin>>a;
	StorePi(a,0,out,0);
	cout<<out;
	cout<<endl;
	


	return 0;
}