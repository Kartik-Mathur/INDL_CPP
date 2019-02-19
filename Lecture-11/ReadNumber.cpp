// ReadNumber
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

int main(){

	int n;
	char a[100];
	cin>>n;
	// cin.ignore();
	cin.get();
	ReadLine(a);
	// cin.getline(a,100);

	cout<<n<<endl;
	cout<<a<<endl;



	return 0;
}



