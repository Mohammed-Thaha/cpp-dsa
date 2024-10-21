#include<bits/stdc++.h>
using namespace std;
void left_shift_operator(int a,int b){
    cout<<(a<<b)<<endl;     //a left shift b-->a*2^b
}
void right_shift_operator(int a,int b){
    cout<<(a>>b)<<endl;   //a right shift b-->a/(2^b)
}
int main(){
    left_shift_operator(5,2); //5*(2^2)=20
    left_shift_operator(6,3); //6*(2^3)=48
    right_shift_operator(10,3);//10/(2^3)=1
    right_shift_operator(32,6);//36/(2^6)=0
    return 0;
}