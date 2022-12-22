#include<bits\stdc++.h>
using namespace std;
#define ll long long

int main(){
    vector<string> v={"aa","aa","bb","cc"};
    sort(v.begin(),v.end());
    map<string,int> mp;
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
    }
    int k=2;
    for(auto it:mp){
        if(it.second==1){
            k--;
        }
        if(it.second==1 && k==0){
            cout<<it.second<<endl;
        }
    }

}