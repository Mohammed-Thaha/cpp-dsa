#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
vector<int> lucky_numbers={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
for(int num:lucky_numbers){
    if(n%num==0){
	cout<<"YES";
	return 0;
    }
}
cout<<"NO";
return 0;
}
