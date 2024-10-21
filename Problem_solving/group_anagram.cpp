#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> group_anagram(vector<string> vec,int n){
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<n;i++){
            string temp=vec[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(vec[i]);
        }
        vector<vector<string>> result;
        for(auto i:mp){
            result.push_back(i.second);
        }
        return result;
}
int main(){
    int n;
    cin>>n;
    vector<string> str;
    for(int i=0;i<n;i++){
        string val;
        cin>>val;
        str.push_back(val);
    }
    vector<vector<string>> ans=group_anagram(str,n);
    for(auto i:ans){
        for(auto j:i)
        cout<<j<<" ";
    }
    return 0;
}