#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int up_cnt=0,lw_cnt=0;
    for(char ch:s){
        if(isupper(ch)){
            up_cnt++;
        }else{
            lw_cnt++;
        }
    }
    if(up_cnt>lw_cnt){
        transform(s.begin(),s.end(),s.begin(),[](char c){
            return toupper(c);
        });
    }else{
        transform(s.begin(),s.end(),s.begin(),[](char c){
            return tolower(c);
        });
    }
cout<<s;
return 0;
}
