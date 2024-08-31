#include<iostream>
#include<deque>
using namespace std;
/*
Deque has front and rear point in which we can insert the element at both the
ends in linear time 
*/
int main(){
    int n;
    cin>>n;
    deque<int> deq;
    deque<int> duplicate(deq);
    for(int i=1;i<=n;i++){
        deq.push_front(i*i);//push the element in front 
    }
    for(auto i:deq){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
         duplicate.push_back(i*i);
    }
    for(auto i:duplicate){
        cout<<i<<" ";
    }
    return 0;
}