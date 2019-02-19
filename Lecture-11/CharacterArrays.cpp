#include <iostream>
using namespace std;

void ReadLine(char *a,char delimiter='\n'){
	char ch;
	ch=cin.get();
	int current_index=0;
	while(ch!=delimiter){
		a[current_index]=ch;
		current_index++;

		ch=cin.get();
	}
	a[current_index]='\0';
}

void print1(char *a){

	for(int i=0;a[i]!='\0';i++){
		// cout<<a[i];
		if(a[i]=='C'){
			cout<<3;
		}
		else{
			cout<<a[i];
		}
	}
	cout<<endl;
}

int main(){
	char a[100];

	// cin>>a;
	ReadLine(a,'$');
	cout<<a<<endl;
	print1(a);


	



	// a="Hello World";
	// a[0]='H';
	// a[1]='E';
	// a[2]='L';
	// a[3]='\0';
	cout<<a<<endl;






	// Initialization of charcter arrays
	// char a[]="Hello COding Blocks";
	// char b[5]="ABCD";




	// // char b[100]={'H','A','R','R','Y','\0'};
	// char arr[5]={'H','A','R','R','\0'};

	// cout<<b<<endl; 
	// cout<<a<<endl; 
	// cout<<(void*)b<<endl; 
	// cout<<(void*)a<<endl; 





	return 0;
}