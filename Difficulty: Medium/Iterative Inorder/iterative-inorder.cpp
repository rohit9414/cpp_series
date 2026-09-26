/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    void pre(Node*root,vector<int>&ans)
    {
        stack<Node*>st1;
        stack<int>st2;
        st1.push(root);
        st2.push(0);
        
        while(!st1.empty())
        {
            Node*temp=st1.top();
            int idx=st2.top();
            st1.pop();
            st2.pop();
            
            if(idx==1)
              ans.push_back(temp->data);
            else
            {
                if(temp->right)  
            {
            st1.push(temp->right);
            st2.push(0);
            }
            
            if(idx<=0)
            {
            st1.push(temp);
            st2.push(1);
            }
            
            if(temp->left)
            {
            st1.push(temp->left);
            st2.push(0);
            }
            }
            
        }
        
        
    }
    vector<int> inOrder(Node* root) {
        // code here
        vector<int>ans;
        pre(root,ans);
        return ans;
    }
};