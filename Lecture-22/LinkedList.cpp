// LinkedList
#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d):data(d),next(NULL){}
};

void InsertAtBeg(node* &head,int d){
	node* n=new node(d);
	n->next=head;
	head=n;
}

void Print(node* head){
	while(head!=NULL){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<endl;
}

int main(){
	node* head=NULL;

	int d;
	cin>>d;

	while(d!=-1){
		InsertAtBeg(head,d);
		cin>>d;
	}
	Print(head);
 
	cout<<endl;
	return 0;
}