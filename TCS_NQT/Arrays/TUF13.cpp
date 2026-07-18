#include<bits/stdc++.h>
using namespace std;
int main(){
/*
Input: nums = [1,1,2,2,2,3]
Output: [3,1,1,2,2,2]
*/
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int> mp;
    for(auto i:arr){
        mp[i]++;
    }  
    vector<pair<int,int>> ans;  //(1,3),()
    for(int i=0;i<n;i++){
        ans.push_back(mp[arr[i]],arr[i]);
    }
    sort(ans.begin(),ans.end());
    for(auto i:ans){
        cout<<i.first<<" "<<i.second;
    }
    return 0;
}