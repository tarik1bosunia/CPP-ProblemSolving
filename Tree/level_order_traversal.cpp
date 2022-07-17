#include<iostream>
#include <queue>
using namespace std;


struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int data): data{data}, left{nullptr}, right{nullptr}{}
};

void level_order_print(Node* root){
    if(!root) return;

    queue<Node*> que;
    que.push(root);

    while(!que.empty()){
        root = que.front();
        que.pop();

        cout << root->data << " "; 
        // que:  9, 2
        // print: 5, 3, 8, 1 , 4 , 6

        if(root->left != nullptr) que.push(root->left);
        if(root->right != nullptr) que.push(root->right);

    }

    
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



   root->left = left;
   root->right = right;

   left->left = left_left;
   left->right = left_right;

  right->left = right_left;
  right->right = right_right;

  left_left->right = left_left_right;
  

   level_order_print(root);
   
    return 0;
}











// struct TreeNode{
//     int data;
//     TreeNode* left;
//     TreeNode* right;
// };

// void levelOrderTraversal(TreeNode* root){
//     if( root == nullptr) return;
//     std::queue<TreeNode*> que;
//     que.push(root);
//     while(!que.empty()){
//         root = que.front();
//         que.pop();
//         cout<< root->data << endl;
//         if(root->left != nullptr) que.push(root->left);
//         if(root->right != nullptr) que.push(root->right);
        
//     }
// }