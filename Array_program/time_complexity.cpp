#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
using namespace std;
void pattern(){
    int n=6;
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++){
        vec[i]=n-i;
    }
    auto start_time=clock();
    sort(vec.begin(),vec.end());
    auto end_time=clock();    //due to my laptop i got 0 has the output
    for(auto i:vec){
        cout<<i<<" ";
    }
    cout<<end_time-start_time<<endl;
    cout<<endl<<endl;
    pattern();
    
    return 0;
}