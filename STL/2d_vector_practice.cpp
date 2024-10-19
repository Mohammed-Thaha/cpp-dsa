#include<iostream>
#include<vector>
using namespace std;
#define max 101
vector<vector<int>> transpose(vector<vector<int>> arr,int n){
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        vector<int> one_dimesional_vector;
        for(int j=0;j<n;j++){
            one_dimesional_vector.push_back(arr[j][i]);
        }
        ans.push_back(one_dimesional_vector);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr;
    for(int i=0;i<n;i++){
        vector<int> values;
        for(int j=0;j<n;j++){
            int val;cin>>val;
            values.push_back(val);
        }
        arr.push_back(values);
    }
    vector<vector<int>> b;
    b=transpose(arr,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}