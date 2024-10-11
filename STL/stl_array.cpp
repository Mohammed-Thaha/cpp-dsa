#include<iostream>
#include<array>
#include<iterator>
#include<algorithm>
using namespace std;
void update_array(array<int,6> &arr,int i,int val){
    arr[i]=val;
}
void print_array(array<int,6> &xarr,int n){
    for(auto i:xarr){
        cout<<i<<" ";
    }
    cout<<endl;
}
void print_array1(array<int,5> arr1,int n){
    for(auto i:arr1){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    array<int,6> arr={1,4,5,4,7,6};
    int n=arr.size();
    update_array(arr,1,2);
    print_array(arr,n);
    sort(arr.begin(),arr.end());
    print_array(arr,n);
    array<int,5> arr1;
    arr1.fill(0);
    print_array1(arr1,arr1.size());
    return 0;
}