#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int one_count=0;    
    for(auto i:vec){
        if(i==1){
            one_count++;
        }
    }
    if(one_count>=1){
        cout<<"Hard";
    }else{
        cout<<"Easy";
    }
    
    return 0;
}