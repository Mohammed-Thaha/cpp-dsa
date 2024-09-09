#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;//key to be search in the arrar
    cin>>k;
    int search=binary_search(arr,arr+n,k); //return the index index of the key in the array
    cout<<search<<endl;
    return 0;
}