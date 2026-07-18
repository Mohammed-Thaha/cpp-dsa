#include<bits/stdc++.h>
using namespace std;
/*
what is subarray?
subarray is the contiguous part of an array 
subarray is an array in that inside have another array
example:
arr=[1,2,3]

then subarray are
{1},{2},{3},{1,2},{2,3},{1,2,3}

Number of subarray can be find using n*((n-1)/2) formula 
n=3
3*(3+1)/2=3*2=6
*/
void three_loops(vector<int>& arr,int n){
    // i am going to generate all the subarray using three loops
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    cout<<endl;
}
void using_recrusion(vector<int> arr,int s,int e){
    if(e==arr.size()){
        return;
    }
    else if(s>e){
        using_recrusion(arr,0,e+1);
    }else{
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    using_recrusion(arr,s+1,e);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Using Three Loops:"<<endl;
    three_loops(arr,n);
    cout<<"Using recursion:"<<endl;
    using_recrusion(arr,0,0);
    cout<<endl;
    cout<<6*(5/2);
    return 0;
}