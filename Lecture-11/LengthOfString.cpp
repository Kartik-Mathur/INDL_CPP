// LengthOfString
#include <iostream>
using namespace std;

void ReadLine(char *a,char delimiter='\n'){
	char ch;
	ch=cin.get();
	int current_index=0;
	while(ch!=delimiter){
		a[current_index]=ch;
		current_index++;

		ch=cin.get();
	}
	a[current_index]='\0';
}

int Length(char *a){
	int i;

	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

bool isPallindrome(char *a){
	int l=Length(a);
	int i=0;
	int j=l-1;

	while(i<j){
		if(a[i]==a[j]){
			i++;
			j--;
		}
		else{
			return false;
		}
	}
	return true;
}


int main(){

	char a[100];
	ReadLine(a);

	// cout<<Length(a)<<endl;
	if(isPallindrome(a)){
		cout<<"Pallindrome"<<endl;
	}
	else{
		cout<<"Not a Pallindrome"<<endl;
	}


	return 0;
}