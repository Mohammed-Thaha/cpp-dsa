#include<bits/stdc++.h>
using namespace std;
int check(string a,string b){
    unordered_map<char,int> mp1,mp2;
    for(auto i:a){
        mp1[i]++;
    }
    for(auto i:b){
        mp2[i]++;            
    }
    return mp1==mp2;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        if(a.size()==n && b.size()==n){
            if(check(a,b)){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}