// Classes
#include <iostream>
using namespace std;
// ---------------- BLUEPRINT ------------------
class Car{
private:
	int price;
public:
	static int count;
	const int tyres;
	int seats;
	char *name;
	int model;

	// Default Constructor
	Car():tyres(4){
		name=NULL;
		count++;
		cout<<"Creating an Object"<<endl;
	}

	// Parameterized Constructor
	Car(char *n,int p,int s,int m):tyres(4),price(p),seats(s),model(m){
		cout<<"In Parameterized Constructor"<<endl;
		name=new char[strlen(n)+1];
		strcpy(name,n);
		count++;
		// price=p;
		// seats=s;
		// model=m;
	}

	Car(char *n,int p,int m=4040):tyres(4){
		cout<<"In Parameterized Constructor 2"<<endl;
		name=new char[strlen(n)+1];
		strcpy(name,n);
		count++;
		price=p;
		model=m;
		seats=4;
	}

	// COPY CONSTRUCTOR
	Car(Car &X):tyres(4){ //Car B(A);
		// cout<<"In Copy Constructor"<<endl;
		name=new char[strlen(X.name)+1];
		strcpy(name,X.name);
		// name=X.name;
		count++;
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

	void operator+=(Car X){
		char *oldName=name;
		name=new char[strlen(name)+strlen(X.name)+1];
		strcpy(name,oldName);
		int i=strlen(oldName);
		
		int l=strlen(X.name);
		for(int j=0;j<=l;j++){
			name[i]=X.name[j];
			i++;
		}
		delete []oldName;

		price+=X.price;
		model+=X.model;
		seats+=X.seats;
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

	void print()const{
		cout<<"Name   : "<<name<<endl;
		cout<<"Price  : "<<"$"<<price<<endl;
		cout<<"Model  : "<<model<<endl;
		cout<<"Seats  : "<<seats<<endl<<endl;;
	}

	Car* operator+(Car X){
		Car *newCar=new Car;
		(*newCar).name=new char[strlen(name)+strlen(X.name)+1];
		strcpy((*newCar).name,name);
		strcat((*newCar).name,X.name);
		(*newCar).price=price+X.price;
		(*newCar).seats=seats+X.seats;
		(*newCar).model=model+X.model;
		return newCar;
	}

	~Car(){
		count--;
		cout<<"Deleting Car : "<<name<<endl;
	}
};
// ----------------------------
// void Car::print(){
// 	cout<<"Name   : "<<name<<endl;
// 	cout<<"Price  : "<<"$"<<price<<endl;
// 	cout<<"Model  : "<<model<<endl;
// 	cout<<"Seats  : "<<seats<<endl<<endl;;
// }

int Car::count=0;

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
	E+=C;
	// E.name[0]='T';

	A.name[0]='C';
	// strcpy(A.name,"Mar");


	
	// A.print();
	// B.print();
	C.print();	
	D.print();
	E.print();

	// Dynamically Allocation of Car
	// Car*F=new Car;
	Car* F=C+D;

	// // (*F).name=new char[5];
	// // strcpy((*F).name,"Ford");
	// // (*F).SetPrice(300);
	// // (*F).seats=3;
	// // (*F).model=1111;
	// // (*F).print();
	// // delete [](*F).name;
	// (*F).print();
	cout<<A.count<<endl;
	delete F;
	cout<<A.count<<endl;

	// delete F;
	// F=NULL;









	return 0;
}