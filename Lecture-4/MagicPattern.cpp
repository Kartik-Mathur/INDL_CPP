#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n; // n: Number of lines to be printed

	int number=0;
	int line=1;
	int j;
	while(line<=n){

		if(line%2==0){
			// even line
			number=number+line-1;
			j=1;
			while(j<=2*line-1){
				if(j%2==0){
					cout<<"*";
				}
				else{
					cout<<number;
					number=number-1;
				}
				j=j+1;
			}
		}
		else{
			// odd line
			number=number+line;

			j=1;
			while(j<=2*line-1){
				if(j%2==0){
					cout<<"*";
				}
				else{
					cout<<number;
					number=number+1;
				}

				j=j+1;
			}
		}

		cout<<endl;

		line=line+1;
	}





	cout<<endl;
	return 0;
}