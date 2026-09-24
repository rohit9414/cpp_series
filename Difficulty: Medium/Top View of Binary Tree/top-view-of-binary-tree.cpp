/* 
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
}; */

class Solution {
  public:
   void find(Node*root,int&l,int&r,int pos)
   {
       if(root==NULL)
       return;
       
       l=min(l,pos);
       r=max(r,pos);
       find(root->left,l,r,pos-1);
       find(root->right,l,r,pos+1);
    }
    void tview(Node*root,vector<int>&ans,vector<int>&level,int l,int pos)
    {
        if(root==NULL)
        return;
        if(level[pos]>l)
        {
            ans[pos]=root->data;
            level[pos]=l;
        }
        tview(root->left,ans,level,l+1,pos-1);
        tview(root->right,ans,level,l+1,pos+1);
        
    }
    vector<int> topView(Node *root) {
        // code here
        int l=0,r=0;
        find(root,l,r,0);
        vector<int>ans(r-l+1,0);
        vector<int>level(r-l+1,INT_MAX);
        tview(root,ans,level,0,-1*l);
        return ans;
    }
};