// PrintAllEven
#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		if(i%2!=0){
			continue;
		}
		cout<<i<<" ";
	}
	cout<<endl;
	int i=1;
	while(i<=n){
		if(i%2!=0){
			i++; // Incase of while loop updation is required before continue
			continue;
		}
		cout<<i<<" ";
		i++;
	}



	cout<<endl;
	return 0;
}