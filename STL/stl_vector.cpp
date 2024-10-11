#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> vec;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    int val;
    cin>>val;
    vec.push_back(val);
   }
   sort(vec.begin(),vec.end());
  for(auto i:vec){
    cout<<i<<" ";
  }
  cout<<endl<<vec.front()<<" "<<vec.back();
   return 0;
}