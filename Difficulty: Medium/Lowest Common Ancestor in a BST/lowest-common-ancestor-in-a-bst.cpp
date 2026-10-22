/* Structure of a Binary Search Tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    Node* lca(Node* root,Node* n1, Node* n2)
    {
        if(!root)
        return NULL;
        if(root->data>n1->data&&root->data>n2->data)
        return lca(root->left,n1,n2);
        else if(root->data<n1->data&&root->data<n2->data)
        return lca(root->right,n1,n2);
        else 
        return root;
    }
    Node* findLCA(Node* root, Node* n1, Node* n2) {
        // code here
        return lca(root,n1,n2);
        
    }
};