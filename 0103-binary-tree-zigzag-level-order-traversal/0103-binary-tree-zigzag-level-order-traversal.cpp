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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<int>temp;
        vector<vector<int>>v;
        stack<TreeNode*>st1;
        stack<TreeNode*>st2;
        if(root==NULL)
        return v;
        st1.push(root);
        while(!st1.empty()||!st2.empty())
        {
            if(!st1.empty())
            {
                while(!st1.empty())
                {
                    TreeNode*node=st1.top();
                    st1.pop();
                    temp.push_back(node->val);
                    if(node->left!= NULL)
                    st2.push(node->left);
                    if(node->right!= NULL)
                    st2.push(node->right);
                }
                v.push_back(temp);
            }
            temp.clear();
            if(!st2.empty())
            {
                while(!st2.empty())
                {
                    TreeNode*node=st2.top();
                    st2.pop();
                    temp.push_back(node->val);
                    if(node->right!= NULL)
                    st1.push(node->right);
                    if(node->left!= NULL)
                    st1.push(node->left);
                }
                v.push_back(temp);
            }
            temp.clear();
        }
        return v;
    }
};