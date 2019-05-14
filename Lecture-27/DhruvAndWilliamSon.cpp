// DhruvAndWilliamSon
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
	int freq[100001]={0};
	int count=0;
	priority_queue<int,vector<int>,Meracomparator> minh,maxh;

	int q;
	cin>>q;

	while(q--){
		string s;
		cin>>s;

		while(!minh.empty() && freq[minh.top()]<=0){
			minh.pop();
		}
		while(!maxh.empty() && freq[-1*maxh.top()]<=0){
			maxh.pop();
		}

		if(s=="Push"){
			int x;
			cin>>x;
			minh.push(x);
			maxh.push(-1*x);
			count++;
			freq[x]++;
		}
		else if(s=="CountHigh"){
			if(count==0){
				cout<<"-1"<<endl;
			}
			else{
				cout<<freq[-1*maxh.top()]<<endl;
			}
		}
		else if(s=="CountLow"){
			if(count==0){
				cout<<"-1"<<endl;
			}
			else{
				cout<<freq[minh.top()]<<endl;
			}
		}
		else{
			if(count==0){
				cout<<"-1"<<endl;
			}
			else{
				int a=maxh.top()*(-1);
				int b=minh.top();
				cout<<a-b<<endl;
				if(a!=b){
					freq[a]--;
					count--;
				}
				freq[b]--;
				count--;
			}
		}


	}




	return 0;
}