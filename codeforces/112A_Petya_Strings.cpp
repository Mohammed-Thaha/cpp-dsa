#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    // Source - https://stackoverflow.com/a/313990
    transform(a.begin(), a.end(), a.begin(),[](unsigned char c){ return tolower(c); }); 
    transform(b.begin(),b.end(),b.begin(),[](unsigned char c){ return tolower(c); });
    int tot_a=0,tot_b=0;

    for(auto i:a){tot_a+=i;}
    for(auto i:b){tot_b+=i;}

    if(a<b){
        cout<<-1;
    }else if(a==b){
        cout<<0;
    }else{
        cout<<1;
    }

    return 0;
}
