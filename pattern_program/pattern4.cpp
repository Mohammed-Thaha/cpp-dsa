#include<iostream>
using namespace std;
/*
n=5
*****
****
***
**
*
*/
void type1_pattern(){
    int n;
    cin>>n;
    for(int i=n;i>=0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
/*
n=5
12345
1234
123
12
1
*/
void type2_pattern(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    type1_pattern();
    type2_pattern();
    return 0;
}

