#include<bits/stdc++.h>
using namespace std;
class Solve{
    public:
        int check(string s,string t){
            if(s.size()!=t.size()){
                return 0;
            }
            int n=s.size(),i=0,j=n-1;
            while(i<n && j>=0){
                if(s[i]!=t[j]){
                    return 0;
                }
                i++,j--;
            }
            return 1;
        }
};
int main(){
    string s,t;
    cin>>s>>t;
    Solve sol;
    if(sol.check(s,t)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}