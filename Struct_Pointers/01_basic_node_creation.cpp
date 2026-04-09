#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
int main(){
    node a,b,c;
    cout<<"Enter A,B and C values:";
    cin>>a.data>>b.data>>c.data;
    a.next=&b;
    b.next=&c;
    c.next=NULL;
    
    node *head=&a;

    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }

    return 0;

}
