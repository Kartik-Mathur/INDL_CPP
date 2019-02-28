// MoveallX
#include <iostream>
using namespace std;

void MoveallX(char *a,int i,int &count){
	// base case
	if(a[i]=='\0'){
		for(int i=1;i<=count;i++){
			cout<<"x";
		}		
		return;
	}
	// Recursive case
	if(a[i]=='x'){
		count++;
		MoveallX(a,i+1,count);
	}
	else{
		cout<<a[i];
		MoveallX(a,i+1,count);
	}
}


int main(){
	char a[]="abcxdexxxhjk";
	int count=0;
	MoveallX(a,0,count);



	cout<<endl;
	return 0;
}