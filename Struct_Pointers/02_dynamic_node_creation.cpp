#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};

//10 20 30 40 50

/*
1st
head=newnode_address
temp=newnode_address

2nd head have address
temp->next=newnode_address_2nd



*/
int main(){
    node *head=NULL,*temp=NULL,*newnode=NULL;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        newnode=new node();
        cin>>newnode->data;
        newnode->next=NULL;

        if(head==NULL){
            head=newnode;
            temp=newnode;
            // cout<<"Head: "<<head<<" "<<"temp: "<<temp<<" "<<"newnode: "<<newnode<<" ";
        }else{
            temp->next=newnode;
            temp=newnode;
            // cout<<i<<" "<<temp->next<<"  "<<temp;
        }
        cout<<endl;
    }

    cout<<"Linked List";

    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }


    return 0;
}
