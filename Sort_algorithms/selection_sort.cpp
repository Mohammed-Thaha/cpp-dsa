#include<iostream>
#include<utility>  //for using swap function in cpp 
using namespace std;
void selection_sort(int arr[],int n){
    int min_index;
    for(int i=0;i<n;i++){
        min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}