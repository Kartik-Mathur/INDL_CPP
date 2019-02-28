#include <iostream>
using namespace std;

void Parantheses(char *a,int i){
	// base case
	if(a[i]=='\0'){
		return;
	}
	// Recursive case
	if(a[i]=='('){
		int k;
		for(k=i+1;a[k]!=')';k++){
			cout<<a[k];
		}
		cout<<endl;
		Parantheses(a,k+1);

	}
	else{
		Parantheses(a,i+1);
	}

}


int main(){
	char a[]="abcd(xefd)sa(jhf)b";
	Parantheses(a,0);

	cout<<endl;
	return 0;
}