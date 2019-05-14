#include <iostream>
#include <queue>
using namespace std;

class Meracomparator{
public:
	// Functor
	bool operator()(int a,int b){
		return a>b;
	}

};


int main(){
	priority_queue<int,vector<int>,Meracomparator> h;

	h.push(0);
	h.push(-1);
	h.push(100);
	h.push(20);
	h.push(5);
	h.push(-10);
	h.push(3);

	// cout<<h.top()<<endl;
	// // h.pop();
	// cout<<h.top()<<endl;
	while(!h.empty()){
		cout<<h.top()<<endl;
		h.pop();
	}




	return 0;
}