// Rat_IN_Maze
#include <iostream>
using namespace std;

bool RatInMaze(char maze[][5],int sol[][10],int i,int j,int n,int m){
	// base case
	if(i==n-1 && j==m-1){
		// Reached destination
		sol[i][j]=1;
		for(int k=0;k<n;k++){
			for(int l=0;l<m;l++){
				cout<<sol[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return true;

	}

	// Recursive case
	sol[i][j]=1;

	// Check Downwards
	if(i+1<n && maze[i+1][j]!='X' && sol[i+1][j]!=1){
		bool KyaNeecheSeRaastaMilla=RatInMaze(maze,sol,i+1,j,n,m);
		if(KyaNeecheSeRaastaMilla){
			return true;
		}
	}
	// Check Rightwards
	if(j+1<m && maze[i][j+1]!='X'&& sol[i][j+1]!=1){
		bool KyaRightSeRaastaMilla=RatInMaze(maze,sol,i,j+1,n,m);
		if(KyaRightSeRaastaMilla){
			return true;
		}
	}
	// Check Upwards
	if(i-1>=0 && maze[i-1][j]!='X'&& sol[i-1][j]!=1){
		bool KyaUpwardsSeRaasteMilla=RatInMaze(maze,sol,i-1,j,n,m);
		if(KyaUpwardsSeRaasteMilla){
			return true;
		}
	}
	// Check Leftwards
	if(j-1>=0 && maze[i][j-1]!='X'&& sol[i][j-1]!=1){
		bool KyaLeftSeRaastaMilla=RatInMaze(maze,sol,i,j-1,n,m);
		if(KyaLeftSeRaastaMilla){
			return true;
		}
	}
	sol[i][j]=0;
	return false;





}


int main(){
	char maze[][5]={
		"OXOO",
		"OOOX",
		"XOXO",
		"XOOX",
		"XXOO",
	};

	int sol[10][10]={0};
	RatInMaze(maze,sol,0,0,5,4);



	cout<<endl;
	return 0;
}