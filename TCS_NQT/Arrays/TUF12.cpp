#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    set<int> t(arr.begin(),arr.end()); //100 50 40
    vector<int> temp(t.begin(),t.end()); //100,50,40
    sort(temp.begin(),temp.end()); //40 50 100


    unordered_map<int,int> mp;  
    for(int i=0;i<temp.size();i++){
         mp[temp[i]]=i;   //40->0 50->1 100->2
    }
    //arr={100 100 50 40}
    for(int i=0;i<n;i++){
        cout<<mp[arr[i]]+1<<" ";  //mp[100]=2 so index+1 then 3 
    }

    return 0;
}