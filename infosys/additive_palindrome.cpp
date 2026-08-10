#include<iostream>
using namespace std;
class Solution{
    public:
    int isPalindrome(int n){
        int t=n,rev=0;
        while(n>0){
            rev=(rev*10)+(n%10);
            n/=10;
        }
        if(rev==t){
            return 1;
        }
        return 0;
    }
    int reverse(int n){
        int rev=0;
        while(n>0){
            rev=(rev*10)+(n%10);
            n/=10;
        }
        return rev;
    }
    int additive_palindrome(int n){
        int sum=n;
        while(!isPalindrome(n)){
            sum+=reverse(n);
            n=sum;
        }
        return n;
    }
};
int main(){
    int n;
    cin>>n;
    Solution s;
    int ans=s.additive_palindrome(n);
    cout<<ans;
}