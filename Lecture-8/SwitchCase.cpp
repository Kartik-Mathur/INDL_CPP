// SwitchCase
#include <iostream>
using namespace std;

int main(){

	char ch;
	cin>>ch;
	int i=0;

	switch(ch){
		case 'n':
		case 'N':
				cout<<"North"<<endl;
				break;
		case 'e':		
		case 'E':
				i=i+100;
				cout<<i<<endl;
				cout<<"East"<<endl;
				break;
		case 'W':
				cout<<"West"<<endl;
				break;
		case 'S':
				cout<<"South"<<endl;
				break;
		default :
				cout<<"Invalid"<<endl;				
	}



	return 0;
}
