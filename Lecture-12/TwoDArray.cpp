// TwoDArray
#include <iostream>
using namespace std;

int main(){
	// int a[][3]={
	// 	{1,2,3},
	// 	{4,5,6},
	// 	{7,8,9}
	// };
	int a[4][4];
	for(int i=0;i<4;i++){
		cout<<"Enter the value of row : "<<i<<endl;
		for(int j=0;j<4;j++){
			cin>>a[i][j];
		}
	}
	
	// Print Row-wise
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

	// Print Col-Wise
	for(int col=0;col<3;col++){
		for(int row=0;row<3;row++){
			cout<<a[row][col]<<" ";
		}
		cout<<endl;

	}



	return 0;
}