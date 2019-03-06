// Classes
#include <iostream>
using namespace std;
// ---------------- BLUEPRINT ------------------
class Car{
private:
	int price;
public:
	int seats;
	char *name;
	int model;

	// Default Constructor
	Car(){
		name=NULL;
		cout<<"Creating an Object"<<endl;
	}

	// Parameterized Constructor
	Car(char *n,int p,int s,int m){
		cout<<"In Parameterized Constructor"<<endl;
		name=new char[strlen(n)+1];
		strcpy(name,n);
		price=p;
		seats=s;
		model=m;
	}

	Car(char *n,int p,int m=4040){
		cout<<"In Parameterized Constructor 2"<<endl;
		name=new char[strlen(n)+1];
		strcpy(name,n);
		price=p;
		model=m;
		seats=4;
	}

	// COPY CONSTRUCTOR
	Car(Car &X){ //Car B(A);
		// cout<<"In Copy Constructor"<<endl;
		name=new char[strlen(X.name)+1];
		strcpy(name,X.name);
		// name=X.name;
		seats=X.seats;
		price=X.price;
		model=X.model;
	}


	// Copy Assignment Operator
	void operator=(Car X){
		if(name!=NULL){
			delete name;
			name=NULL;
		}
		cout<<"In Assignment "<<endl;
		name=new char[strlen(X.name)+1];
		strcpy(name,X.name);
		price=X.price;
		seats=X.seats;
		model=X.model;
	}

	void SetPrice(int p){
		if(p>100){
			price=p;
		}
		else{
			price=150;
		}
	}

	int GetPrice(){
		return price;
	}

	void SetName(char *n){
		name=new char[strlen(n)+1];
		strcpy(name,n);
	}

	void print(){
		cout<<"Name   : "<<name<<endl;
		cout<<"Price  : "<<"$"<<price<<endl;
		cout<<"Model  : "<<model<<endl;
		cout<<"Seats  : "<<seats<<endl<<endl;;
	}
};
// ----------------------------
// void Car::print(){
// 	cout<<"Name   : "<<name<<endl;
// 	cout<<"Price  : "<<"$"<<price<<endl;
// 	cout<<"Model  : "<<model<<endl;
// 	cout<<"Seats  : "<<seats<<endl<<endl;;
// }



int main(){		
	Car A; // Object of class car

	// A.price=100;
	A.SetPrice(-100); 
	cout<<A.GetPrice()<<endl;

	A.seats=4;
	// A.name[0]='B';
	// A.name[1]='M';
	// A.name[2]='W';
	// A.name[3]='\0';
	// strcpy(A.name,"BMW");
	A.SetName("BMW");
	A.model=500;
	Car B("AUDI",500,4,1000);

	Car C("Suzuki",300,7,1010);

	// Car D("Ford",250);
	// Car D(A);
	Car D=A; // COPY CONSTRUCTOR
	// Car E(D);
	Car E;
	E=D;
	E.name[0]='T';

	A.name[0]='C';
	// strcpy(A.name,"Mar");


	
	A.print();
	B.print();
	C.print();	
	D.print();
	E.print();



	return 0;
}