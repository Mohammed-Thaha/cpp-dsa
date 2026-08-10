#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        vector<int> vec(t);
        int odd=0,even=0;
        for(int i=0;i<t;i++){
            cin>>vec[i];
        }
        for(auto i:vec){
            if(i%2==0){
                even++;
            }else{
                odd++;
            }
        }
        if(odd>0 && even>0){
            sort(vec.begin(),vec.end());
        }
        for(auto i:vec){
            cout<<i<<" ";
        }
    }
    return 0;
}