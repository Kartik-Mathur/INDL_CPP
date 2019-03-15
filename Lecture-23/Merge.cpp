// Merge
#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d):data(d),next(NULL){}
};

void InsertAtEnd(node* &head,int d){
	if(head==NULL){
		head=new node(d);
		return;
	}

	node* temp=head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	node* n= new node(d);
	temp->next=n;
	return;
}

void print(node* head){
	while(head){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<"NULL"<<endl;

}

void Input(node* &head){
	int d;
	cin>>d;
	while(d!=-1){
		InsertAtEnd(head,d);
		cin>>d;
	}	
}

node* mid(node* head){
	if(head==NULL||head->next==NULL){
		return head;
	}
	node* slow=head;
	node* fast=head->next;

	while(fast){
		fast=fast->next;
		if(fast){
			fast=fast->next;
			slow=slow->next;
		}
	}
	return slow;
}

node* merge(node* a,node* b){
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}
	node* c;
	if(a->data<b->data){
		c=a;
		c->next=merge(a->next,b);
	}
	else{
		c=b;
		c->next=merge(a,b->next);
	}
	return c;
}

node* mergeSort(node* head){
	// base case
	if(head==NULL||head->next==NULL){
		return head;
	}

	// divide
	node* m=mid(head);
	node* a=head;
	node* b=m->next;
	m->next=NULL;

	// sort
	a=mergeSort(a);
	b=mergeSort(b);

	// merge
	node* newHead=merge(a,b);
	return newHead;
}

bool isCyclic(node* head){
	node* slow=head;
	node* fast=head;
	while(fast){
		fast=fast->next;
		if(fast==NULL){
			return false;
		}
		fast=fast->next;
		slow=slow->next;
		if(fast==slow){
			return true;
		}
	}
	return false;
}

void CreateACycle(node* head){
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=head->next->next;
}

void BreakCycle(node* head){
	node* fast=head;
	node* slow=head;

	while(fast){
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow){
			break;
		}
	}

	node* prev=head;

	while(prev->next!=fast){
		prev=prev->next;
	}

	slow=head;
	while(slow!=fast){
		prev=fast;
		fast=fast->next;
		slow=slow->next;
	}
	prev->next=NULL;
}


int main(){
	node* head=NULL;

	Input(head);
	CreateACycle(head);
	if(isCyclic(head)){
		cout<<"Cycle Exists"<<endl;
		BreakCycle(head);
	}
	else{
		cout<<"Cycle doesnot Exists"<<endl;
	}
	print(head);

	// head=mergeSort(head);
	// Input(head1);

	// print(head);
	// print(head1);

	// head=merge(head,head1);
	// print(head);




	return 0;
}