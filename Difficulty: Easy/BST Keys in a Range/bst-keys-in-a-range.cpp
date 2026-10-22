/* Structure of tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/
class Solution {
  public:
    void range(Node *root,vector<int>&ans,int low, int high)
    {
        if(!root)
        return;
        range(root->left,ans,low,high);
        if(root->data>=low&&root->data<=high)
        ans.push_back(root->data);
        range(root->right,ans,low,high);
    }
    vector<int> nodesInRange(Node *root, int low, int high) {
        // code here
        vector<int>ans;
        range(root,ans,low,high);
        return ans;
        
    }
};