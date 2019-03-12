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
	cout<<"NULL"<<endl;
}

void InsertAtEnd(node* &head,int data){
	if(head==NULL){
		head=new node(data);
		return;
	}
	node* temp=head;
	while(temp->next){
		temp=temp->next;
	}
	node* n=new node(data);
	temp->next=n;
}

node* Search(node* head,int key){
	if(head==NULL){
		return NULL;
	}
	if(head->data==key){
		return head;
	}
	return Search(head->next,key);
}

node* IterativeSearch(node* head,int key){
	while(head){
		if(head->data==key){
			return head;
		}
		head=head->next;
	}
	return NULL;
}

void DeleteAtBeg(node* &head){
	if(head==NULL){
		return;
	}

	node* temp=head;
	head=head->next;
	delete temp;
}

void DeleteAtEnd(node* &head){
	if(head==NULL){
		return;
	}
	else if(head->next==NULL){
		delete head;
		head=NULL;
		return;
	}
	node* temp=head;
	while(temp->next->next){
		temp=temp->next;
	}
	delete temp->next;
	temp->next=NULL;
}

void ReverseLL(node* &head){
	if(head==NULL||head->next==NULL){
		return;
	}
	node* current=head;
	node* prev=NULL;
	node* n;

	while(current!=NULL){
		n=current->next;
		current->next=prev;
		prev=current;
		current=n;
	}
	head=prev;
	return;
}

node* last5(node* head){
	node* ahead=head;
	node* behind=head;

	int jump=1;
	while(jump<=5){
		ahead=ahead->next;
		jump++;
	}

	while(ahead){
		ahead=ahead->next;
		behind=behind->next;
	}
	return behind;
}

int length(node* head){
	int count=0;
	while(head){
		count++;
		head=head->next;
	}
	return count;
}


void BubbleSort(node* &head){

	node* current;
	node* prev;
	node* n;

	int l=length(head);
	for(int i=0;i<l-1;i++){
		current=head;
		prev=NULL;
		while(current && current->next){
			if(current->data>current->next->data){
				// swapping hogi
				if(prev==NULL){
					// first node swap hogi toh head change hoga
					n=current->next;
					current->next=n->next;
					n->next=current;
					prev=head=n;
				}
				else{
					// here head will not change
					n=current->next;
					current->next=n->next;
					n->next=current;
					prev->next=n;
					prev=n;

				}
			}
			else{
				// swaping nahi hogi
				prev=current;
				current=current->next;
			}
		}
	}
}




int main(){
	node* head=NULL;

	int d;
	cin>>d;

	while(d!=-1){
		InsertAtEnd(head,d);
		cin>>d;
	}
	Print(head);
	BubbleSort(head);
	cout<<"After Sorting : "<<endl;
	Print(head);
	ReverseLL(head);
	// InsertAtEnd(head,9);
	// InsertAtEnd(head,10);
	// InsertAtEnd(head,11);
	// Print(head);
	// DeleteAtBeg(head);
	// DeleteAtBeg(head);
	// DeleteAtEnd(head);
	Print(head);
	node* ans=last5(head);
	cout<<ans->data<<endl;

	return 0;
}