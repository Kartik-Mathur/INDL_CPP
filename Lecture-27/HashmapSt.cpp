#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main(){

    // unordered_map<string,int> h;
    // // First way - Insertion
    // pair<string,int> p("Apple",200);
    // cout<<p.first<<","<<p.second<<endl;
    // h.insert(p);
    // // second way - Insertion
    // h.insert(make_pair("Mango",100));

    // cout<<h["Mango"]<<endl;
    // h["Mango"]=200;
    // cout<<h["Mango"]<<endl;
    // h["Papaya"]=50;
    // cout<<h["Papaya"]<<endl;

    // for(auto node:h){
    //     cout<<node.first<<","<<node.second<<endl;
    // }
 
    // To store multiple phone numbers 
    unordered_map<string,vector<int> > m;

    m["XYZ"].push_back(99334);
    m["XYZ"].push_back(99335);
    m["XYZ"].push_back(99336);

    m["ABC"].push_back(88888);
    m["ABC"].push_back(88889);
    m["ABC"].push_back(88890);


    for(auto node:m){
        cout<<node.first<<"-->";
        for(int i=0;i<node.second.size();i++){
            cout<<node.second[i]<<",";
        }
        cout<<endl;
    }


    return 0;
}