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
    int position(vector<int>in,int srt,int end,int target)
    {
        for(int i=srt;i<=end;i++)
        {
            if(in[i]==target)
            return i;
        }
        return -1;
    }
    TreeNode* cons(vector<int>&pre,vector<int>&in,int srt,int end,int idx)
    {
        if(srt>end)
        return NULL;

        TreeNode*temp=new TreeNode(pre[idx]);
        int pos=position(in,srt,end,pre[idx]);
        temp->left=cons(pre,in,srt,pos-1,idx+1);
        temp->right=cons(pre,in,pos+1,end,idx+pos-srt+1);
        return temp;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
      int srt=0,end=preorder.size()-1,idx=0;  
      return  cons(preorder,inorder,srt,end,idx);
    
    }
};