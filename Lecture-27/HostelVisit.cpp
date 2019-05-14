#include <iostream>
#include <queue>
using namespace std;
#define ll long long

ll RocketDistance(ll x,ll y){
    return x*x+y*y;
}


int main(){
    ll q,k;
    priority_queue<int> h;

    cin>>q>>k;
    int count=0;
    while(q--){
        ll type;
        cin>>type;
        if(type == 1){
            ll x,y;
            cin>>x>>y;
            ll RD = RocketDistance(x,y);
            if(count<k){
                h.push(RD);
                count++;
            }
            else{
                if(RD<h.top()){
                    h.pop();
                    h.push(RD);
                }
            }
        }
        else{
            cout<<h.top()<<endl;
        }
    }



    return 0;
}