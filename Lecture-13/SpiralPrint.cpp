// SpiralPrint
#include <iostream>
using namespace std;

void SpiralPrint(int a[][4],int r,int c){
	int sr=0;
	int sc=0;
	int er=r;
	int ec=c;

	while(sr<=er && sc<=ec){
		// Print the sr from sc till ec
		for(int j=sc;j<=ec;j++){
			cout<<a[sr][j]<<" ";
		}
		sr++;
		for(int i=sr;i<=er;i++){
			cout<<a[i][ec]<<" ";
		}
		ec--;

		if(sr<er){
			for(int j=ec;j>=sc;j--){
				cout<<a[er][j]<<" ";
			}
			er--;
		}

		if(sc<ec){
			for(int i=er;i>=sr;i--){
				cout<<a[i][sc]<<" ";
			}
			sc++;
		}

	}
	cout<<endl;
}


int main(){
	int a[][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	int r,c;
	cin>>r>>c;

	SpiralPrint(a,r,c);
	return 0;
}

