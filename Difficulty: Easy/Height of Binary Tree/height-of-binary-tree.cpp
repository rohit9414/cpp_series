/* Structrue of Binary Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int h1(Node*root)
    {
        if(root==NULL)
        return 0;
        return max(h1(root->left),h1(root->right))+1;
    }
    int height(Node* root) 
    {
        // code here
        int depth=h1(root);
        return depth-1;
    }
    
};