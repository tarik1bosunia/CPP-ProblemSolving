#include<iostream>
using namespace std;


struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int data): data{data}, left{nullptr}, right{nullptr}{}
};

void pre_order_traversal(Node* root){
    // base case
    if(root == NULL) return;


    // recursive case
    

    // 1. work (visit root)
    cout << root->data << " ";
    // 2. visit left
    pre_order_traversal(root->left);


    
    // 3. visit right
    pre_order_traversal(root->right);


    
}


    
int main(){
   
   Node* root = new Node(5);
   Node* left = new Node(3);
   Node* right = new Node(8);

   Node* left_left = new Node(1);
   Node* left_right = new Node(4);

   Node* right_left = new Node(6);
   Node* right_right = new Node(9);

   Node* left_left_right = new Node(2);

// 1 2 4 5 6 7 3

    // connecting nodes
   root->left = left;
   root->right = right;

   left->left = left_left;
   left->right = left_right;

  right->left = right_left;
  right->right = right_right;

  left->left->right = left_left_right;
  

    // pint tree
   pre_order_traversal(root);
   cout << "\n" ;
   
    return 0;
}