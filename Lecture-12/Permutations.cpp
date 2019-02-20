// Permutations
#include <iostream>
using namespace std;
int length(char *a){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}



int main(){
	char a[100],b[100];
	int freq[26]={0};

	cin.getline(a,100);
	cin.getline(b,100);
	for(int i=0;a[i]!='\0';i++){
		int indx=a[i]-'a';
		// freq[indx]=freq[indx]+1;
		freq[indx]++;
	}
	for(int i=0;b[i]!='\0';i++){
		int indx=b[i]-'a';
		freq[indx]--;
	}
	int i;
	for(i=0;i<26;i++){
		if(freq[i]!=0){
			cout<<"Not a Permutation"<<endl;
			break;
		}
	}
	if(i==26){
		cout<<"Permutation"<<endl;
	}














	return 0;
}