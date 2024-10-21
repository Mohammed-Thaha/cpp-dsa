#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   if((n&(n-1))==0){
    cout<<"The Number is power of two";
   }else{
    cout<<"No the number is not the power of two";
   }
    return 0;
}
//Mohammed Thaha
 //example
    //16->10000
    //15->01111
   //and->00000