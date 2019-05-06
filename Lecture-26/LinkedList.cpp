#include <iostream>
using namespace std;
#define ll long long 

class node{
public:
	int data;
	node* next;

	node(int d):data(d),next(NULL){
		// data=d;
		// next=NULL;
	}
};

void InsertInLL(node* &head,int d){
	if(head==NULL){
		head=new node(d);
	}
	else{
		// Insertion at front
		node* n=new node(d);
		// (*n).next=head;
		n->next=head;
		head=n;
	}
	return;

}
// void Swap(int &a,int &b){
// 	a=a+b;
// 	b=a-b;
// 	a=a-b;
// 	// a=(a+b)-(b=a);
// }

void Print(node* head){
	while(head){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<endl;
}

void AddIntersection(node* h1,node* h2){
	while(h2->next!=NULL){
		h2=h2->next;
	}
	h2->next=h1->next->next->next;
}

void BreakIntersection(node* h1,node *h2){
	node* t2=h2,*t1;
	while(t2){
		t1=h1;
		while(t1){
			if(t1==t2){
				break;
			}
			
			t1=t1->next;
		}
		if(t1!=NULL){
			cout<<"Intersection found at "<<t1->data<<endl;
			break;
		}

		t2=t2->next;
	}

	node* t3=h2;
	while(t3->next!=t2){
		t3=t3->next;
	}
	t3->next=NULL;
}

int main(){
	// int a=10;
	// int b=20;
	// cout<<"Before Swap a: "<<a<<" b: "<<b<<endl;
	// Swap(a,b);
	// cout<<"After Swap a: "<<a<<" b: "<<b<<endl;
	node* h1 = NULL;
	for(int i=0;i<7;i++){
		InsertInLL(h1,7-i);
	}	
	Print(h1);

	node* h2=NULL;
	InsertInLL(h2,13);
	InsertInLL(h2,12);
	InsertInLL(h2,11);
	Print(h2);
	AddIntersection(h1,h2);
	Print(h2);
	BreakIntersection(h1,h2);
	Print(h1);
	Print(h2);

	return 0;
}