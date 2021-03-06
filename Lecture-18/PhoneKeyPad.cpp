// PhoneKeyPad
#include <iostream>
using namespace std;

string keys[]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void PhoneKeyPad(char *a,int i,char out[],int j){
	if(a[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}

	int digit=a[i]-'0';
	for(int k=0;keys[digit][k]!='\0';k++){
		out[j]=keys[digit][k];
		PhoneKeyPad(a,i+1,out,j+1);
	}
}

int main(){
	char a[100];
	cin>>a;
	char out[100];
	PhoneKeyPad(a,0,out,0);

	cout<<endl;

	return 0;
}