#include<bits/stdc++.h>
using namespace std;
//In this concept i have made a name and phone number in the list
int main(){
    unordered_map<string,string> database;
    database["Thaha"]="12345";
    database["FSC"]="13579";
    database["Tech"]="02468";

    for(auto data:database){
        cout<<data.first<<" "<<data.second<<endl;
    }
    return 0;
}