/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// public:
//     void in(TreeNode*root,vector<int>&ans)
//     {
//         if(!root)
//         return ;
//         in(root->left,ans);
//         ans.push_back(root->val);
//         in(root->right,ans);
//     }
//     int minDiffInBST(TreeNode* root) {
//      vector<int>ans;
//      in(root,ans);
//      int mn=INT_MAX;
//      for(int i=1;i<ans.size();i++)
//      {
//         mn=min(mn,ans[i]-ans[i-1]);
//      } 
//      return mn; 
//     }

class Solution {
public:
    void minimum(TreeNode*root,int &mn,int &pre)
    {
        if(!root)
        return ;
        minimum(root->left,mn,pre);
        if(pre!=INT_MIN)
        mn=min(mn,root->val-pre);
        pre=root->val;
        minimum(root->right,mn,pre);
    }
    int minDiffInBST(TreeNode* root) {
    int mn=INT_MAX,pre=INT_MIN;
     minimum(root,mn,pre);
     return mn;
    }
    
};