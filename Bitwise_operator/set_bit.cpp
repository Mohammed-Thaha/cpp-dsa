#include<iostream>
using namespace std;
int count_set_bit(int n){
    int cnt=0;
    while(n>0){
        cnt+=(n&1);
        n=n>>1;//right shift
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    cout<<count_set_bit(n);
    return 0;
} 
