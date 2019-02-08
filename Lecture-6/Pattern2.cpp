#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	char ch='A';
	int number=1;

	for(int line=0;line<=n;line++){

		for(int spaces=1;spaces<=n-line;spaces++){
			cout<<" ";
		}

		for(int j=1;j<=2*line-1;j++){
			if(j==1||j==2*line-1){
				cout<<ch;
				ch++;
			}
			else if(j==line){
				cout<<number;
				number++;
			}
			else{
				cout<<"*";
			}
		}
		cout<<endl;

	}


	cout<<endl;
	return 0;
}