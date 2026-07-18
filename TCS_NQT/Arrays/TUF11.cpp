#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int> prefix(n),suffix(n);
        prefix[0]=arr[0];
        suffix[n-1]=arr[n-1];
        for(int i=1,j=n-2;i<n,j>=0;i++,j--){
            prefix[i]=prefix[i-1]+arr[i];
            suffix[j]=suffix[j+1]+arr[j];
        }
        bool flag=false;
        for(int i=0;i<n;i++){
            if(prefix[i]-arr[i]==suffix[i]-arr[i]){
                cout<<i<<" ";
                flag=true;
                break;
            }
        }
    if(!flag){
        cout<<"-1";
    }

        return 0;
}