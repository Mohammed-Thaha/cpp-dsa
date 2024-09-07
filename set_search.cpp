#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> s={1,2,3,4,5,11,9,4};
    int key;
    cin>>key;
    if(s.find(key)!=s.end()){
        cout<<key<<" is found";
    }else{
        cout<<"Is not Found";
    }
    return 0;
}