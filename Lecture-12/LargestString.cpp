// LargestString
#include <iostream>
using namespace std;

int length(char *a){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

void COPY(char *a,char *b){
	// copy b into a
	int n=length(b);
	for(int j=0;j<=n;j++){
		a[j]=b[j];
	}


}

int main(){
	char largest[100];
	int largest_len=0;

	char in[100];
	int n;
	cin>>n;
	cin.get();

	for(int i=0;i<n;i++){
		cin.getline(in,100);
		int l=length(in);

		if(l>largest_len){
			COPY(largest,in);
			largest_len=l;
		}
	}
	cout<<"Largest String : "<<largest<<endl;
	cout<<"Largest length : "<<largest_len<<endl;
	return 0;
		
}
