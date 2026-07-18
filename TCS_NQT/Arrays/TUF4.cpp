#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++,end--;
    }
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}