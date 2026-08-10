#include<bits/stdc++.h>
using namespace std;
vector<int> monotonic_decrease_stack(vector<int>& arr,stack<int>& st,vector<int>& res){
       int n=arr.size();
       for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            res[i]=st.top();
        }
        st.push(arr[i]);
    }
    return res;
}
vector<int> monotonic_increase_stack(vector<int>& arr,stack<int>& st,vector<int>& res){
    int n=arr.size();
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            res[i]=st.top();
        }
        st.push(arr[i]);
    }
    return res;
}
int main(){ 
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stack<int> st;
    vector<int> res(n,-1);
    monotonic_increase_stack(arr,st,res);
    for(auto i:res){
        cout<<i<<" ";
    }
}