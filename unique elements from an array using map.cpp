#include<bits\stdc++.h>
using namespace std;
#define ll long long


int main(){
    vector<int> v;
    map<int,int> mp;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
        mp[x]++;
    }
    for(auto it: mp){
        if(it.second==1){
            cout<<it.first<<endl;
        }
    }
}