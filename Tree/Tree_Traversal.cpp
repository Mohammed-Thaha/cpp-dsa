#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data=x;
        left=nullptr;
        right=nullptr;
    }
};
void In_Order(Node* node,vector<int>& tree){
    if(node==nullptr){
        return;
    }
    In_Order(node->left,tree);
    tree.push_back(node->data);
    In_Order(node->right,tree);
}
void Pre_Order(Node* node,vector<int>& tree){
    if(node==nullptr){
        return;
    }
    tree.push_back(node->data);
    Pre_Order(node->left,tree);
    Pre_Order(node->right,tree);
}
void Post_Order(Node* node,vector<int>& tree){
    if(node==nullptr){
        return;
    }
    Post_Order(node->left,tree);
    Post_Order(node->right,tree);
    tree.push_back(node->data);
}
int main(){

    /*
            5
       4         6
     0   1     3    2

     inorder traversal--> (left,root,right)
     0,4,1,5,3,6,2   
     preorder traversal--> (root,left,right)
     5 4 0 1 6 3 2
     postorder traversal--> (left,right,root)
     0 1 4 3 2 6 5
    */
    Node *root=new Node(5);
    root->left=new Node(4);
    root->right=new Node(6);

    root->left->left=new Node(0);
    root->left->right=new Node(1);

    root->right->left=new Node(3);
    root->right->right=new Node(2);


    //In Order Traversal
    vector<int> In_Order_Tree_Traversal;
    In_Order(root,In_Order_Tree_Traversal);

    cout<<"Inorder Traversal:";
    for(auto i:In_Order_Tree_Traversal){
        cout<<i<<" ";
    }
    cout<<endl;
    //Pre Order Traversal
    vector<int> Pre_Order_Tree_Traversal;
    Pre_Order(root,Pre_Order_Tree_Traversal);

    cout<<"PostOrder Traversal:";
    for(auto i:Pre_Order_Tree_Traversal){
        cout<<i<<" ";
    }
    cout<<endl;

    //Post Order Traversal
    vector<int> Post_Order_Tree_Traversal;
    Post_Order(root,Post_Order_Tree_Traversal);

    cout<<"PostOrder Traversal:";
    for(auto i:Post_Order_Tree_Traversal){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}