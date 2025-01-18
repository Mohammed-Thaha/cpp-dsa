#include<bits/stdc++.h> 
using namespace std;
int main(){
    int t;
    cin>>t;
    //The below loop is for the test cases
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cout<<"0";
            }else{
                cout<<"1";
            }
        }
        cout<<endl;
    }
    return 0;
}