/* Structure of binary tree node
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
    void find(Node*root,int pos,int &l)
    {
        if(!root)
        return;
        l=max(l,pos);
        find(root->left,pos+1,l);
        find(root->right,pos,l);
        
    }
    void findDig(Node*root,vector<vector<int> >&ans,int pos)
    {
        if(!root)
        return;
        ans[pos].push_back(root->data);
        findDig(root->left,ans,pos+1);
        findDig(root->right,ans,pos);
    }
    vector<int> diagonal(Node *root) {
        // code here
        int l=0;
        find(root,0,l);
        vector<vector<int> >ans(l+1);
        findDig(root,ans,0);
        vector<int>res;
        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[i].size();j++)
            {
                res.push_back(ans[i][j]);
            }
        }
        return res;
    }
};