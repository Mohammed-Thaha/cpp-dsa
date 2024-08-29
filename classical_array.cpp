#include<bits/stdc++.h>
using namespace std;
void update_array(int arr[],int i,int val){
    arr[i]=val;
}
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void getsize_function(int *arr){
    cout<<sizeof(arr)/sizeof(int)<<endl;
}
int main(){
    int arr[]={1,2,3,4,5};
    cout<<arr<<endl;//hexdecimal address of index-->0
    cout<<&arr[0]<<endl;//same like arr
    int n=sizeof(arr)/sizeof(int);
    update_array(arr,2,12);
    print_array(arr,n);
    getsize_function(arr);
    sort(arr,arr+n);
    print_array(arr,n);
    return 0;
}