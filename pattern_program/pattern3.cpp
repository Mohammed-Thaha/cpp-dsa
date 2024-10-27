#include<iostream>
using namespace std;
/*
Number Pattern with two type
n=5
1
12
123
123
1234
12345
*/
void type1_pattern(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
/*
n=5
1
22
333
4444
55555
*/
void type2_pattern(){
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count;
        }
        count++;
        cout<<endl;
    }
}
int main(){
    type1_pattern();
    cout<<endl;
    type2_pattern();
    return 0;
}

