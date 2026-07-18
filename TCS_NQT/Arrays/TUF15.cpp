#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int prod=1,maxi=arr[0];
    for(int i=0;i<n;i++){
        prod*=arr[i];
        maxi=max(prod,maxi);
        if(prod==0){
            prod=1;
        }
    }
    prod=1;
    for(int i=n-1;i>=0;i--){
        prod*=arr[i];
        maxi=max(prod,maxi);
        if(prod==0){
            prod=1;
        }
    }
    cout<<maxi<<" ";

    return 0;
}