#include<bits/stdc++.h>
using namespace std;

int solve(string i){
    map<char,int> mp;
    for(auto s:i){
        mp[s]++;
    }
    for(auto i:mp){
        if(i.second!=1){
            return 0;
        }
    }
    return 1;
}

int main(){
string s;
cin>>s;
int n=s.size();
vector<string> vec;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
    vec.push_back(s.substr(i,j));
    }
}
int count=1;
vector<int> vec1;
for(auto i:vec){
    if(solve(i)){
        vec1.push_back(count);
    }
}
for(auto i:vec1){
    cout<<i<<" ";
}
}