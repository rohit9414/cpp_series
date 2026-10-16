/* Structure of tree node
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
    Node* bst(vector<int>&post,int low,int upp,int &idx)
    {
       if(idx<0||low>post[idx]&&post[idx]<upp||post[idx]>upp&&post[idx]>low)
        return NULL;
        Node*root=new Node(post[idx]);
        idx--;
        root->right=bst(post,root->data,upp,idx);
        root->left=bst(post,low,root->data,idx);
        return root;      
               
    }
    Node* constructTree(vector<int>& post) {
        // code here
        int idx=post.size()-1;
        int low=INT_MIN,upp=INT_MAX;
        Node*root=bst(post,low,upp,idx);
        return root;
    }
};