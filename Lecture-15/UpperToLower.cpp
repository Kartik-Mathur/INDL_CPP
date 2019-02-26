// UpperToLower
#include <iostream>
using namespace std;

void Upper(char *a,int i){
	if(a[i]=='\0'){
		return;
	}

	a[i]=a[i]^' ';
	Upper(a,i+1);
}


int main(){
	char a[100];
	cin>>a;
	cout<<a<<endl;
	Upper(a,0);
	cout<<a<<endl;
	


	return 0;
}