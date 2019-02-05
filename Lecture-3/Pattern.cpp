// Pattern
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	int line=1;
	while(line<=n){
		int spaces=1;
		while(spaces<=n-line){
			cout<<" ";
			spaces=spaces+1;
		}

		int no=line;
		int j=1;
		while(j<=line){
			cout<<no;
			no=no+1;
			j=j+1;
		}

		j=1;
		no=2*line-2;
		while(j<=line-1){
			cout<<no;
			no=no-1;
			j=j+1;
		}

		cout<<endl;
		line=line+1;
	}


	cout<<endl;
	return 0;
}