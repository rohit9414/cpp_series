/* Structure of a Binary Search Tree node
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
    void inorder(Node *root,vector<int>&arr)
    {
        if(!root)
        return;
        inorder(root->left,arr);
        arr.push_back(root->data);
        inorder(root->right,arr);
    }
    vector<int> merge(Node *r1, Node *r2) {
        // code here
        vector<int>first,second,ans;
        inorder(r1,first);
        inorder(r2,second);
        int n1=first.size();
        int n2=second.size();
        int i=0,j=0;
        while(i<n1&&j<n2)
        {
            if(first[i]<=second[j])
            {
                ans.push_back(first[i]);
                i++;
            }
            else
            {
                ans.push_back(second[j]);
                j++;
            }
        }
        while(i<n1)
        {
            ans.push_back(first[i]);
                i++;
        }
        while(j<n2)
        {
            ans.push_back(second[j]);
                j++;
        }
        return ans;
        
    }
};