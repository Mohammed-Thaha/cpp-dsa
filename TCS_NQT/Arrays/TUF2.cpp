#include<bits/stdc++.h>
using namespace std;

//distinc element means the first largest/smallest is not the same for the second largest/smallest

void solve(vector<int> arr){
    int n=arr.size();

    int max1=INT_MIN,max2=INT_MIN;
    int min1=INT_MAX,min2=INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }else if(arr[i]>max2 && arr[i]!=max1){
            max2=arr[i];
        }
        if(arr[i]<min1){
            min2=min1;
            min1=arr[i];
        }else if(arr[i]<min2 && arr[i]!=min1){
            min2=arr[i];
        }
    }
    cout<<"second smallest="<<min2<<endl;
    cout<<"second largest="<<max2;

}
int main(){
    int n;
    cin>>n;
    vector<int> arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    solve(arr1);
    

}