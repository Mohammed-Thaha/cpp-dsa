#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> vec;
    for(int i=0;i<n;i++){
        int val,v1,v2,v3,v4;
        cin>>val>>v1>>v2>>v3>>v4;
        vec.push_back({val,v1,v2,v3,v4});// (0,10)     
    }
   for(auto i:vec){
    for(auto j:i){
        cout<<j<<" ";
    }
    cout<<endl;
   }
   cout<<vec[1][1];
    return 0;
}