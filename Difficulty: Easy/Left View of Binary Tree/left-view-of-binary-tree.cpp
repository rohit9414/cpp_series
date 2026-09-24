/* Structure of Binary Tree Node
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
    void leftview1(Node*root,int level,vector<int>&v)
    {
        if(root==NULL)
        return;
        if(v.size()==level)
        v.push_back(root->data);
        leftview1(root->left,level+1,v);
        leftview1(root->right,level+1,v);
    }
    vector<int> leftView(Node *root) {
        // code here
        vector<int>v;
        int level=0;
        leftview1(root,level,v);
      return v;
    }
};