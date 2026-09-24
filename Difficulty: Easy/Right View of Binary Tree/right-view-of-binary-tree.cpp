/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    void rv(Node*root,int level,vector<int>&v)
    {
        if(root==NULL)
        return;
        if(v.size()==level)
        v.push_back(root->data);
        rv(root->right,level+1,v);
        rv(root->left,level+1,v);
    }
    vector<int> rightView(Node *root) {
        //  code here
        vector<int>v;
        int level=0;
        rv(root,level,v);
        return v;
    }
};