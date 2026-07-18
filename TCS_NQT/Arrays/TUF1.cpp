#include<bits/stdc++.h>
using namespace std;
/*
Example 1:
Input: arr1[]= [1,3,4,5,2]
       arr2[]= [2,4,3,1,7,5,15]
Output: arr1[] is a subset of arr2[]

Example 2:
Input: arr1[]= [1,3,4,5,2]
       arr2[]= [4,5,2]
Output: arr1[] is not a subset of arr2[]

Example 3:
Input: arr1[]= [1,3,4,5,2]
       arr2[]= [11,12,13,15,16]
Output: arr1[] is not a subset of arr2[]
*/

void solve(vector<int> arr1,vector<int> arr2){
   sort(arr2.begin(),arr2.end());
   
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr1(n),arr2(m);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }
    solve(arr1,arr2);

}