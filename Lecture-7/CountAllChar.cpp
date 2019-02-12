// CountAllChar
#include <iostream>
using namespace std;

int main(){
	int digit=0,characters=0,spaces=0,other=0;

	char ch;
	ch=cin.get();

	while(ch!='$'){
		if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
			characters++;
		}
		else if(ch>='0'&&ch<='9'){
			digit++;
		}
		else if(ch==' '||ch=='\n'||ch=='\t'){
			spaces++;
		}
		else{
			other++;
		}
		ch=cin.get();
	}

	cout<<"Characters : "<<characters<<endl;
	cout<<"Digits : "<<digit<<endl;
	cout<<"Whitespaces : "<<spaces<<endl;
	cout<<"Special Characters : "<<other<<endl;



	return 0;
}