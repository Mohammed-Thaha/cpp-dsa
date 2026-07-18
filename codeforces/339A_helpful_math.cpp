#include<bits/stdc++.h>
using namespace std;
class solve{
    public: 
        void solution(){
            string s;
            cin>>s;
            string result="";
            for(char i:s){
                if(isdigit(i)){
                   result+=i; 
                }
            }
            sort(result.begin(),result.end());
            for(int i=0;i<result.size();i++){
                cout<<result[i];
                if(i!=result.size()-1){
                    cout<<"+";
                }
            }
        }
};
int main() {
    solve s;
    s.solution();
    
    return 0;
}