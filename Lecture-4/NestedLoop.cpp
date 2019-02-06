// NestedLoop
#include <iostream>
using namespace std;

int main(){
	int i=1,j;
	while(i<=3){
		j=1;
		while(j<=3){
			cout<<"*";
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}


	cout<<endl;
	return 0;
}