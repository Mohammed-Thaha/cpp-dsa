#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    string student_queue;
    cin>>student_queue;
    while(t--){
        for(int j=0;j<n;){
            if(student_queue[j]=='B' && student_queue[j+1]=='G'){
                swap(student_queue[j],student_queue[j+1]);
                j+=2;
            }else{
                j++;
            }
        }
    }
    cout<<student_queue;
    return 0;
}