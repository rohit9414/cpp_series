/* Structure of a Binary Search Tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    Node*prev=NULL;
    Node*first=NULL;
    Node*second=NULL;
    void find(Node* root)
    {
        if(!root)
        return;
        find(root->left);
        if(prev && prev->data>root->data)
        {
            if(!first)
            first=prev;
            
            second=root;
        }
        prev=root;
        find(root->right);
    }
    Node* correctBST(Node* root) {
        // code here
        
         
        find(root);
        if (first && second)
        swap(first->data,second->data);
        
        return root;
    }
};