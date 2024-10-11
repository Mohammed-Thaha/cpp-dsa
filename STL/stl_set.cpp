#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s = {1, 2, 3, 4};
   for(int val=0;val<100;val++){
    if(s.find(val)==s.end()){
        cout<<"hello world"<<" "<<val<<endl;
    }else{
        cout<<val<<endl;
    }
    }
    return 0;
}