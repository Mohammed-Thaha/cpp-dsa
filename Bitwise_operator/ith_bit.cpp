#include<bits/stdc++.h>
using namespace std;
void get_ith_bit(int a,int i){
    int change=1<<i;
    cout<<(change&a);
}
void odd_even(int a){
    if(a&1){
        cout<<"Odd"<<endl;
    }else{
        cout<<"Even"<<endl;
    }
}
int main(){
     int val1,n;
     cin>>val1>>n;
     get_ith_bit(val1,n);
     odd_even(val1);
    return 0;
}