#include<iostream>
#include<vector>
using namespace std;

//All the below function using same name but parameter is different so this method is called method overloading


//The below normal recursive method
int fibo(int n){
    if(n<=1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
//The below using DP using recursion
int fibo(int n,vector<int>& dp){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
    return dp[n];
}
//The below using DP but not using recursion
int fibo1(int n){
    if(n<=1){
        return n;
    }
    vector<int> dp(n);
    dp[0]=0,dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<"Recursion Normal Method: "<<fibo(n)<<endl;
    cout<<"Using Recursion Method in DP: "<<fibo(n,dp)<<endl;
    cout<<"Using no recurison method in DP: "<<fibo1(n);

    return 0;
}