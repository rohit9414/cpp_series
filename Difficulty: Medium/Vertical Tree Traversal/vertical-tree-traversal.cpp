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
    void find(Node*root,int&l,int&r,int pos)
        {
            if(root==NULL)
            return;
            l=min(l,pos);
            r=max(r,pos);
            find(root->left,l,r,pos-1);
            find(root->right,l,r,pos+1);
        }
    vector<vector<int>> verticalOrder(Node *root) {
        // code here
        vector<vector<int>>ans;
        if(root==NULL)
        return ans;
        
        int l=0,r=0,pos=0;
        find(root,l,r,pos);
        vector<vector<int>>positive(r+1);
        vector<vector<int>>negative(abs(l)+1);
        queue<Node*>q;
        queue<int>index;
        q.push(root);
        index.push(0);
        while(!q.empty())
        {
            Node*temp=q.front();
            q.pop();
            int pos=index.front();
            index.pop();
            if(pos>=0)
            positive[pos].push_back(temp->data);
            else
            negative[abs(pos)].push_back(temp->data);
            if(temp->left)
            {
                q.push(temp->left);
                index.push(pos-1);
            }
            if(temp->right)
            {
                q.push(temp->right);
                index.push(pos+1);
            }

        }
        for(int i=negative.size()-1;i>0;i--)
        ans.push_back(negative[i]);

        for(int i=0;i<positive.size();i++)
        ans.push_back(positive[i]);

        return ans;
    }
};