#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mid=n/2;
    sort(arr.begin(),arr.end());
    reverse(arr.begin()+mid,arr.end());
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}