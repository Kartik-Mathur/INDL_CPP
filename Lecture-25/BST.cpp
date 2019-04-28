// BST
#include <iostream>
#include <queue>
#include <climits>
#include <cmath>
using namespace std; 

class node{
public:
	int data;
	node* left;
	node* right;

	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};

// Insert In Bst
node* InsertInBst(node* root,int data){
	if(root==NULL){
		root=new node(data);
		return root;
	}
	if(root->data >= data){
		root->left=InsertInBst(root->left,data);
	}
	else{
		root->right=InsertInBst(root->right,data);
	}
	return root;
}
// Create BST
node* CreateBST(){
	node* root=NULL;
	int data;
	cin>>data;
	while(data!=-1){
		root=InsertInBst(root,data);

		cin>>data;
	}
	return root;
}

node* SearchInBst(node* root,int key){
	if(root==NULL){
		return NULL;
	}

	if(root->data==key){
		return root;
	}
	else if(root->data>=key){
		return SearchInBst(root->left,key);
	}
	else{
		return SearchInBst(root->right,key);
	}
}

void LevelOrderPrint(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		if(temp==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<" ";
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp ->right);
			}
		}
	}
}

bool isBST(node* root,int k1=INT_MIN,int k2=INT_MAX){
	if(root==NULL){
		return true;
	}

	if(root->data<=k2 && root->data>=k1 && isBST(root->left,k1,root->data) && isBST(root->right,root->data,k2)){
		return true;
	}
	else{
		return false;
	}
}

class Pair{
	public:
		int height;
		bool balanced;
};
	
Pair isBalancedBst(node* root){
	Pair p;
	if(root==NULL){
		p.balanced=true;
		p.height=0;
		return p;
	}
	Pair left = isBalancedBst(root->left);
	Pair right = isBalancedBst(root->right);
	p.height = max(left.height,right.height)+1;
	if(abs(left.height-right.height)<=1 && left.balanced && right.balanced){
		p.balanced = true;
	}
	else{
		p.balanced = false;
	}
	return p;
}

node* buildTree(int* a,int s,int e){
	if(s>e){
		return NULL;
	}

	int mid=(s+e)/2;
	node* root = new node(a[mid]);
	root->left=buildTree(a,s,mid-1);
	root->right=buildTree(a,mid+1,e);
	return root;
}

class LinkedList{
public:
	node* head;
	node* tail;
};

LinkedList BstToLL(node* root){
	LinkedList l;
	if(root==NULL){
		l.head=l.tail=NULL;
		return l;
	}		

	// 4 cases
	// Left tree : NULL and Right !=NULL
	if(root->left==NULL && root->right!=NULL){
		LinkedList right = BstToLL(root->right);
		root->right= right.head;
		l.head = root;
		l.tail=right.tail;
		return l;
	}
	else if(root->left!=NULL && root->right==NULL){
		LinkedList left = BstToLL(root->left);
		left.tail->right = root;
		l.head=left.head;
		l.tail=root;
		return l;
	}
	else if(root->left==NULL && root->right==NULL){
		l.head=l.tail=root;
		return l;
	}
	else{
		LinkedList left = BstToLL(root->left);
		LinkedList right = BstToLL(root->right);

		left.tail->right=root;
		root->right=right.head;
		l.head=left.head;
		l.tail=right.tail;
		return l;
	}
}

void Print(LinkedList l){
	node* temp=l.head;
	while(temp!=NULL){
		cout<<temp->data<<"-->";
		temp=temp->right;
	}
	cout<<endl;
}

int main(){
	node* root=NULL;
	int a[]={1,2,3,4,5,6,7};
	int n =sizeof(a)/sizeof(int);
	root=buildTree(a,0,n-1);
	
	LevelOrderPrint(root);
	// node* ans=SearchInBst(root,111);
	// cout<<ans->data<<endl;
	if(isBST(root)){
		cout<<"BST"<<endl;
	}

	LinkedList l = BstToLL(root);
	Print(l);

	// Pair p = isBalancedBst(root);
	// cout<<"Height "<<p.height<<endl;
	// if(p.balanced){
	// 	cout<<"Balanced"<<endl;
	// }
	// else{
	// 	cout<<"Not balanced"<<endl;
	// }

	return 0;
}