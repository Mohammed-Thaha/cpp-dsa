#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    //using this approach we can easily find the repeated frequency in the sorted array
    auto lb=lower_bound(arr,arr+n,key);
    auto hb=upper_bound(arr,arr+n,key);
    cout<<lb<<endl<<hb<<endl<<hb-lb<<endl;
    return 0;
}