#include<iostream>
#include "../Author.h"
using namespace std;
int main()
{
    //In this program i am just counting the characters count in a string using array
    Display();
    string s;
    cin>>s;
    int n=s.size();
    int arr[256]={0}; //All the Ascii character initialize with 0
    for(char c: s){
        arr[c]++;
    }
    for(int i=0;i<n;i++){
        cout<<s[i]<<":"<<arr[s[i]]<<endl;
    }
    return 0;
} 

