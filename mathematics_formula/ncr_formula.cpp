#include<bits/stdc++.h>
using namespace std;
int ncr(int n,int r){
long long result=1;
for(int i=0;i<r;i++){
result=result*(n-1);
result/=(i+1);
}
return result;
}
int main(){
cout<<"nCr where n=4 and c=2 and the answer is "<<ncr(4,2);

}
