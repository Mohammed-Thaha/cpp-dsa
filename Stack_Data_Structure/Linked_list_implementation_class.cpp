#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node(int val){
        data=val;
        next=nullptr;
    }
};
void print_list(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* head=new node(5);
    head->next=new node(4);
    head->next->next=new node(3);
    head->next->next->next=new node(2);
    head->next->next->next->next=new node(1);
    head->next->next->next->next->next=new node(0);

    print_list(head);
}
