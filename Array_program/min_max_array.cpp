#include<bits/stdc++.h>
using namespace std;
int min_array(vector<int> a,int n){
    int m=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<m){
            m=a[i];
        }
    }
    return m;
}
int max_array(vector<int> a,int n){
    int m=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    return m;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min_val=min_array(arr,n);
    int max_val=max_array(arr,n);
    cout<<"Minimum value:"<<min_val<<endl;
    cout<<"Maximum Value:"<<max_val;
    return 0;
}