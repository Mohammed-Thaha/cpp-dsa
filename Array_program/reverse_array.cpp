#include<iostream>
using namespace std;
void reverse_array(int arr[],int n){
    int start=0,end=n-1;  //for iteration to starting to ending
    while(start<end){
        /*
         in below the swap function swap the left side value in
         array to right side of the array so the array easily  become reverse    
         example 
            5
            10 20 30 40 50
            in first iteration
                start=0,end=4
                now swap occur
                so 4th index 50 comes to 0th index 10 place and 10 replace the 50 
                and start is increment and end is decrment to terminate the loop 
                as well as swap the other array value
        */
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void print_array(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse_array(arr,n);
    print_array(arr,n);

    return 0;
} 
