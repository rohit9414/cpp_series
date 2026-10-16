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
class Solution {
public:
    TreeNode*bst(vector<int>&pre,int low,int upp,int &idx)
    {

        if(idx==pre.size()||low>pre[idx]&&pre[idx]<upp||pre[idx]>upp&&pre[idx]>low)
        return NULL;
        TreeNode*root=new TreeNode(pre[idx]);
        idx++;
        root->left=bst(pre,low,root->val,idx);
        root->right=bst(pre,root->val,upp,idx);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int idx=0,low=INT_MIN,upp=INT_MAX;
        TreeNode*root=bst(preorder,low,upp,idx);
        return root;
    }
};