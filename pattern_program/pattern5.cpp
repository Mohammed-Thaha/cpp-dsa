#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //n number of rows
    for(int i=0;i<n;i++){
        // for space between the pyramid pattern
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        // stars in the pattern 
        for(int k=0;k<2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}

/*
The Input is 9 
The Output     
       *
      ***
     *****
    *******
   *********
  ***********
 *************
***************
*/
