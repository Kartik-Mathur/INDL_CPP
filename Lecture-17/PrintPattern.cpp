// PrintPattern
#include <iostream>
using namespace std;

void Pattern(int n,int line,int no){
	// base case
	if(line==n){
		return;
	}

	for(int i=1;i<=line+1;i++){
		cout<<no;
		no++;
	}
	cout<<endl;
	Pattern(n,line+1,no);
}



int main(){
	int n;
	cin>>n;
	Pattern(n,0,1);

	cout<<endl;
	return 0;
}