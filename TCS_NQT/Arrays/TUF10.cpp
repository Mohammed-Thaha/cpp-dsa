#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int cnt=0;
for(auto i:mp){
    if(i.second>1){
        cout<<i.first<<" ";
    }else{
        cnt++;
    }
}
if(cnt==mp.size()){
    cout<<"No Repeating Elements";
}

    return 0;
}