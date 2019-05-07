// PhoneKeyPad
#include <iostream>
#include <cstring>
using namespace std;

string keys[]={" "," ","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
char Persons[100][100]={
	"RAHUL","GURPINDER","ADIYA","ADI","SANCHIIIT","AMIT"
};




char a[1000][100];
int m=0; // On which index of a we are adding the answer

bool KeyPersonMeiHai(char * key,char* person){
	int i=0;
	int j=0;
	while(person[j]!='\0'){
		if(key[i]==person[j]){
			i++;j++;	
		}
		else{
			i=0;
			j++;
		}
		if(key[i]=='\0'){
				return true;
		}
	}
	return false;
}
// Match the array a values with Persons array
void Match(){
	char key[100],person[100];
	for(int i=0;i<m;i++){
		// pick up a key from a
		strcpy(key,a[i]);
		// Now match it with the persons array
		// Itererate over the persons array
		for(int p=0;p<6;p++){
			// pick up a person
			strcpy(person,Persons[p]);
			if(KeyPersonMeiHai(key,person)){
				cout<<person<<endl;
			}
		}
	}

}



void PhoneKeyPad(char *in,char* out,int i,int j){
	// base case
	if(in[i]=='\0'){
		out[j]='\0';
		// cout<<out<<endl;
		strcpy(a[m++],out);

		return;
	}

	// recursive case
	char ch=in[i];
	int indx=ch-'0';
	for(int k=0;keys[indx][k]!='\0';k++){
		out[j]=keys[indx][k];
		PhoneKeyPad(in,out,i+1,j+1);
	}

}


int main(){
	char in[100],out[100];
	char ch;
	// cin>>ch;
	cin>>in;

	PhoneKeyPad(in,out,0,0);
	
	cout<<"The result is :"<<endl;
	for(int i=0;i<m;i++){
		cout<<a[i]<<endl;
	}
	Match();
	cout<<endl;
	return 0;
}