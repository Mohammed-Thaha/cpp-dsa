#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define all(p)  p.begin(),p.end()
int main(){
    vector<int> vec;
    for(int i=10;i>0;i--){
        vec.pb(i);
    }
    sort(all(vec));
    for(auto i:vec){
        cout<<i<<" ";
    }
    return 0;
}