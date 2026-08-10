#include<bits/stdc++.h>
using namespace std;
class CodeForce{
    int amount,bills,carry;
    public: 
        CodeForce(int n):amount(n){
            
            bills=n/100; 
            carry=n%100;

            bills+=carry/20; 
            carry=carry%20;

            bills+=carry/10;
            carry=carry%10;

            bills+=carry/5;
            carry=carry%5;

            bills+=carry/1;
            carry=carry%1;
            
            cout<<bills;
        }
};
int main(){
   int n;
   cin>>n;
   CodeForce solve(n);

   
    return 0;
}   