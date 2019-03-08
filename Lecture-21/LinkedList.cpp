// LinkedList
#include <iostream>
#include <vector>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d):data(d),next(NULL){
		// data=d;
		// next=NULL;
	}
};


class LinkedList{
public:
	node* head;
	node* tail;

	LinkedList(){
		head=tail=NULL;
	}

	void InsertAtFront(int d){
		if(head==NULL){ // ll is empty
			node* n=new node(d);
			head=tail=n;
		}
		else{ // ll is not empty
			node* n=new node(d);
			n->next=head;
			head=n;
		}
	}

	void print(){
		node* temp=head;
		while(temp!=NULL){
			cout<<temp->data<<"-->";
			temp=temp->next;
		}
		cout<<endl;
	}

	void InsertAtEnd(int d){
		if(head==NULL){
			node* n=new node(d);
			head=tail=n;
		}
		else{
			node* n=new node(d);
			tail->next=n;
			tail=n;
		}
	}

	int length(){
		node* temp=head;
		int count=0;
		while(temp){
			count++;
			temp=temp->next;
		}
		return count;
	}

	void InsertAtMid(int d,int pos){
		if(pos==0){
			InsertAtFront(d);
		}
		else if(pos>=length()){
			InsertAtEnd(d);
		}
		else{
			node* temp=head;
			int jump=1;
			while(jump<=pos-1){
				temp=temp->next;
				jump++;
			}
			node* n=new node(d);
			n->next=temp->next;
			temp->next=n;
		}
	}

	node* search(int key){
		node* temp=head;
		while(temp){
			if(temp->data==key){
				return temp;
			}
			temp=temp->next;
		}

		return NULL;
	}

	// DELETION
	void DeleteAtFront(){
		if(head==NULL){
			return;
		}
		else if(head->next==NULL){
			delete head;
			head=tail=NULL;
		}
		else{
			node* temp=head;
			head=head->next;
			delete temp;
		}
	}

	void DeleteAtEnd(){
		if(head==NULL){
			return;
		}
		else if(head->next==NULL){
			delete head;
			head=tail=NULL;
		}
		else{
			node* temp=head;
			while(temp->next!=tail){
				temp=temp->next;
			}
			delete tail;
			tail=temp;
			tail->next=NULL;
		}
	}

	void DeleteAtMid(int pos){
		if(pos==0){
			DeleteAtFront();
		}
		else if(pos>=length()){
			DeleteAtEnd();
		}
		else{
			node* temp=head;
			int jump=1;
			while(jump<=pos-1){
				temp=temp->next;
				jump++;
			}
			node* n=temp->next;
			temp->next=n->next;
			delete n;
		}
	}

	node* mid(){
		if(head==NULL){
			return NULL;
		}
		else if(head->next==NULL){
			return head;
		}
		node* fast=head->next;
		node* slow=head;
		while(fast!=NULL){
			fast=fast->next;

			if(fast!=NULL){
				fast=fast->next;
				slow=slow->next;
			}
		}
		return slow;
	}

};



int main(){

	LinkedList l;

	l.InsertAtEnd(0);
	l.InsertAtEnd(1);
	l.InsertAtEnd(3);
	l.InsertAtEnd(4);
	l.InsertAtEnd(5);
	l.InsertAtEnd(6);
	l.InsertAtEnd(7);

	l.print();
	node* ans=l.mid();
	cout<<ans->data<<endl;
	// l.DeleteAtFront();
	// l.DeleteAtFront();
	int pos,data;
	// cout<<"Enter data and pos :";
	// cin>>data>>pos;
	// l.InsertAtMid(data,pos);
	// l.print();
	// l.DeleteAtEnd();
	// l.print();
	// l.DeleteAtMid(2);
	// l.print();
	// l.print();
	// l.print();
	// int key;
	// cin>>key;

	// node* ans=l.search(key);
	// if(ans==NULL){
	// 	cout<<"Key not Found!"<<endl;
	// }
	// else{
	// 	cout<<ans->data<<endl;
	// 	// cout<<ans->next->data<<endl;
	// 	ans->next=NULL;
	// }

	// l.print();



























	// node* n=new node(5);
	// cout<<n->data<<endl;

	// if(n->next==NULL){
	// 	cout<<"There is no other node at next"<<endl;
	// }

	// node n(5);

	// cout<<n.data<<endl;
	// if(n.next==NULL){
	// 	cout<<"There is no other node at next"<<endl;
	// }

	// node n1(6);
	// n.next=&n1;
	// cout<<n.data<<"-->"<<(*n.next).data<<endl;
	// cout<<n.next->data<<endl;


	return 0;
}