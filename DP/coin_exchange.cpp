#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    //1,2,5-->coins and amount=10   
    //5--> 2 coins
    //1--> 10 coins
    //2--> 5 coins
    //5 2 2 1 --> 4 coins

    // but minimum is 5 rupees coin so 


    vector<int> coins={1,2,5};
    vector<int> dp(n+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        for(int coin:coins){
            if(coin<=i && dp[i-coin]!=INT_MAX){
                dp[i]=min(dp[i],dp[i-coin]+1);
            }
        }
    }
    /*
    1   
    {1,2,5}   
    1<=1 && dp[1-1]!=INT_max yes then min(dp[1]-->(int_max),dp[0](0)+1) ans=1
    dp[1]=1
    2<=1 no

    2
    1<=2
    dp[2-1]=dp[1]=1 
    dp[2]=min(dp[2],dp[1]+1)=min(dp[2],2)=2 ans=2
    dp[2]=2
    2<=2  && dp[2-2]=0
    dp[2]=min(dp[2],dp[2-2]+1)=min(2,1)=1
    dp[2]=1 updated
    3<=2 no

    3
    1<=3
    it don't need to compute again from dp[0],dp[1],d[2] alredy compute and store 
    so whenever it need it take from teh dp
    4
    5
    6
    7
    */

    //so the intitution is simple u have7 rupees 
    //need to give the coin in simple ways but 
    //possible of coins are 1,2 and 5 and think
    /* 
minimum(if take the 1 from 7 we need to find for minimum coin required to find 6
        if take the 2 from 7 we need to find for minimum coin required to find 5
        if take the 5 from 7 we need to find for minimum coin required to find 2
)
        so the answer is 2+1 coin 
        
        if take the 1 from 6 we need to find for minimum coin required to find 5
        if take the 2 from 6 we need to find for minimum coin required to find 4
        if take the 5 from 6 we need to find the minimum coin required to find 1
        so the answer is 
        minimum(5,4,1)+1=1+1=2
    */
    int count=0;
    for(auto i:dp){
        cout<<count<<" "<<i<<"\n";
        count++;
    }

}