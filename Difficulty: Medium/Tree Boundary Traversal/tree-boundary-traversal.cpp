/* Node Structure
class Node {
  public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    void leftsub(Node*root,vector<int>&ans)
    {
        if(!root || (!root->left && !root->right))
                   return;
        if(root->left)
        {
            ans.push_back(root->data);
            leftsub(root->left,ans);
        }
        else
        {
            ans.push_back(root->data);
            leftsub(root->right,ans);
        }
    }
    void leaf(Node*root,vector<int>&ans)
    {
        
        if(!root)
         return;

        if(!root->left && !root->right) 
        {
            ans.push_back(root->data);
            return;
        }
        leaf(root->left,ans);
        leaf(root->right,ans);
    }
    void rightsub(Node*root,vector<int>&ans)
    {
        if(!root || (!root->left && !root->right))
           return;
        if(root->right)
        {
            rightsub(root->right,ans);
            ans.push_back(root->data);
        }
        else
        {
            rightsub(root->left,ans);
            ans.push_back(root->data);
        }
        
    }
    
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int>ans;
        if(!root)
        return ans;
        ans.push_back(root->data);
        if(!root->left && !root->right)
                return ans;
        
        //left traversal
        if(root->left)
        leftsub(root->left,ans);
        //leaf traversal
        
        leaf(root,ans);
        //right traverasl
        if(root->right)
        rightsub(root->right,ans);
        return ans;
    }
};