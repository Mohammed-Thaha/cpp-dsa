#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tar;
    cin>>tar;
    unordered_map<int,int> HT;
    for(auto i:arr){
        HT[i]=i;
    }
    for(int i=0;i<n;i++){
        int complement=tar-arr[i];
        if(HT.count(complement) && HT[complement]!=i){
            cout<<i<<" "<<HT[complement]<<endl;
        }
    }


    return 0;
}