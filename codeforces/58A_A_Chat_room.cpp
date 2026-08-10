#include<bits/stdc++.h>
using namespace std;

int main(){
    string input,word="hello"; //hello 5 letters
    cin>>input;
    int j=0;
    for(int i=0;i<input.size();i++){
        if(word[j]==input[i]){
            j++;
            if(j==5){
                cout<<"YES\n";
                return 0;
            }
        }
    }
    cout<<"NO\n";
    
    return 0;
}