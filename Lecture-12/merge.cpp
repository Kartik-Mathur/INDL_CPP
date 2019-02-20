// merge
#include <iostream>
using namespace std;

int length(char *a){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}
void merge(char *a,char *b){
	int i=length(a);
	int n=length(b);

	for(int j=0;j<=n;j++){
		a[i]=b[j];
		i++;
	}
	return;
}



int main(){
	char a[100];
	char b[100];

	cout<<"Enter string a: ";
	cin.getline(a,100);
	
	cout<<"Enter string b: ";	
	cin.getline(b,100);

	merge(a,b);
	cout<<a<<endl;
	cout<<b<<endl;


	return 0;
}