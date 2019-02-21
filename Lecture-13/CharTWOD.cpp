#include <iostream>
using namespace std;

int main(){
	char b[][100]={
		"Apple",
		"Mango",
		"Guava"
	};
	cout<<strlen(b[0])<<endl;
	cout<<strlen(b[1])<<endl;

	for(int i=0;i<3;i++){
		for(int j=0;b[i][j]!='\0';j++){
			char ch=b[i][j];
			if(ch>='A' && ch<='Z'){
				cout<<(char)(ch+32);
			}
			else{
				cout<<(char)(ch-32);
			}
		}
		cout<<endl;
	}

	char a[][3]={
		{'A','B','\0'},
		{'C','D','\0'},
		{'E','F','\0'}
	};

	// cout<<a[0][0]<<endl;
	// cout<<a[1][1]<<endl;
	// cout<<a[0]<<endl;
	// cout<<a[1]<<endl;
	// cout<<a[2]<<endl;



	return 0;
}

