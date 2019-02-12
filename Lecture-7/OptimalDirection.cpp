// OptimalDirection
#include <iostream>
using namespace std;

int main(){
	int x=0,y=0;

	char ch;

	ch=cin.get();

	while(ch!='\n'){
		if(ch=='N'||ch=='n'){
			y++;
		}
		else if(ch=='S'||ch=='s'){
			y--;
		}
		else if(ch=='W'||ch=='w'){
			x--;
		}
		else{
			x++;
		}
		ch=cin.get();
	}

	cout<<"("<<x<<","<<y<<")"<<endl;

	if(x>=0 && y>=0){
		// print x times E, then print y times N
		while(x>0){
			cout<<'E';
			x--;
		}

		while(y>0){
			cout<<'N';
			y--;
		}

	}
	else if(x<=0 && y>=0){
		x=x*(-1);

	}
	else if(x<=0&&y<=0){

	}
	else{

	}











	return 0;
}