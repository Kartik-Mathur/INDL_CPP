// Recursion-CodesOfTheString
#include <iostream>
using namespace std;
#define ll long long 

void Codes(char in[],int i,char out[],int j){
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}

	// case 1 
	// Take a single digit number
	int digit1 = in[i]-'0';
	char ch = 'a'+digit1-1;
	out[j]=ch;
	
	Codes(in,i+1,out,j+1);

	// case 2
	// Take a double digit number
	if(in[i+1]!='\0'){
		int digit2=in[i+1]-'0';
		int twoDigitNumber = digit1*10 + digit2;
		if(twoDigitNumber>26){
			return;
		}
		char ch = 'a'+twoDigitNumber-1;
		out[j] = ch;
		Codes(in,i+2,out,j+1);
	}
}


int main(){
	char in[100];
	char out[100];
	cin>>in;

	Codes(in,0,out,0); // inarray , i=0, outarray, j=0
	
	return 0;
}