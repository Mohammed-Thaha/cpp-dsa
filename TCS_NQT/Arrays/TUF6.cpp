#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int n1=n-1;
    sort(arr.begin(),arr.end());
    if(n%2==0){
        cout<<(float)(arr[n1/2]+arr[(n1/2)+1])/2;
    }else{
        cout<<arr[n1/2];
    }
    return 0;
}