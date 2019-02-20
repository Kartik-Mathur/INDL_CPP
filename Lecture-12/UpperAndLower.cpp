// UpperAndLower
#include <iostream>
using namespace std;

int main(){
	int a[][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i>=j){
				cout<<a[i][j]<<" ";
			}
		}
		cout<<endl;
	}
	cout<<endl;

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(j>=i){
				cout<<a[i][j]<<" ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}	

	return 0;
}