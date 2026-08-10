#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    string split=s.substr(0,n/2);
    sort(split.begin(),split.end());
    string split_rev=split;
    reverse(split_rev.begin(),split_rev.end());
    // cout<<split;
    if(n%2==0){
        split+=split_rev;
    }
    cout<<split;
    return 0;
}