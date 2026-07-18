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

int main(){
    node* head=nullptr;
    node* tail=nullptr;
    int x;
    while(cin>>x){
        node* new_node=new node(x);
        if(head==nullptr){
            head=tail=new_node;
        }else{
            tail->next=new_node;
            tail=new_node;
        }
    }
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}
