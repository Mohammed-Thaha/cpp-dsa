#include<bits/stdc++.h>
using namespace std;
/*
1 2 3 4 5 5 
yes we can split the array into equal sum subarray

1 2 3 4 = 10
5 5= 10

number of subbarray can form using the above array is n=6
6*(7/2)=6*3=18 
{1} {2} {3} {4} {5} {5} 
{1,2} {2,3} {3,4} {4,5} {5,5}
{1,2,3} {2,3,4} {3,4,5} {4,5,5}
{1,2,3,4,5} {2,3,4,5,5}
{1,2,3,4,5,5}



solving the problem using prefix sum and suffix sum of an all the element and then 
check they equal then it true we can split if not we couldn't split

{1,2,3,4,5,5}
prefix sum={s,3,6,10,15,20}
suffix sum={19,17,14,10,5,e}
both 10 is located in the same index position 3 then it form subarray 
the reason can found in the intro of this folder
*/
int normal_approach(vector<int> arr,int n){
    for(int i=0;i<n;i++){
        int left_sum=0;
        int right_sum=0;
        for(int j=0;j<=i;j++){
            left_sum+=arr[j];
        }
        for(int j=i+1;j<n;j++){
            right_sum+=arr[j];
        }
        if(left_sum==right_sum){
            return 1;
        }
    }
    return 0;
}
int efficient_approach(vector<int> arr,int n){
    int total_sum=0;
    for(int i:arr){
        total_sum+=i;
    }
    int left_sum=0;
    for(int i=0;i<n;i++){
        left_sum+=arr[i];
        int right_sum=total_sum-left_sum;
        if(left_sum==right_sum){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(normal_approach(arr,n) && efficient_approach(arr,n)){
        cout<<"Can Split the array";
    }else{
        cout<<"No can't split the array";
    }
    return 0;
}