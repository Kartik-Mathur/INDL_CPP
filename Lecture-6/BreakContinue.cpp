// 
#include <iostream>
using namespace std;

int main(){

	// for(int i=1;i<=3;i++){

	// 	for(int j=0;j<=i;j++){
	// 		if(j==(i/2)){
	// 			break;
	// 		}
	// 		cout<<j;
	// 	}
	// 	cout<<endl;
	// }
	for(int i=1;i<=3;i++){

		if(i==2){
			continue;
		}
		cout<<i<<endl;
	}

	// for(int i=0;i<=10;i++){ // Initialization occurs only once, not everytime loop re-run itself.
	// 	cout<<i<<" ";
	// }



	cout<<endl;
	return 0;
}