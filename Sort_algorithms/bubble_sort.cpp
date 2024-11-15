#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n){
    bool swaped=false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped=true;
            }
        }
        if(swaped==false){
            break;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    auto start_time=clock();
    bubble_sort(arr,n);
    auto end_time=clock();
    cout<<end_time-start_time<<" "<<endl;
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}