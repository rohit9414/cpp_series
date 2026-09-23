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
    int  balanced(TreeNode*root,bool &valid)
    {
        if(root==NULL)
        return 0;
        int l=balanced(root->left,valid);
        int r=balanced(root->right,valid);
        if(abs(l-r)>1)
        valid=0;
        return max(r,l)+1;
    }
    bool isBalanced(TreeNode* root) {
        bool valid=1;
        balanced(root,valid);
        return valid;
    }
};