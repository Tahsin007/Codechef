
#include<bits\stdc++.h>
using namespace std;
#define ll long long

bool check(vector<int> v1, vector<int> v2, int n,int m){
    if(n!=m) return false;

    unordered_map<int,int> m1;
    unordered_map<int,int> m2;
    for(int i : v1){
        m1[i]++;
    }
    for(int i : v2){
        m2[i]++;
    }
    for(auto it=m1.begin();it!=m1.end();it++){
        if(m2[it->first] != it->second){
            return false;
        }
    }
    return true;

}



int main(){
        vector<int> v1={2,4,3,4,5,9},v2={2,2,3,4,5,9};
        int n=v1.size();
        int m=v2.size();
        bool ok=check(v1,v2,n,m);
        if(ok==true) cout<<"YES";
        else cout<<"NO";


    }
