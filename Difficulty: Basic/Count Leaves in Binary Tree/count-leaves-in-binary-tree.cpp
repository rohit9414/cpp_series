/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    void counting(Node* root,int&count)
    {
        if(root==NULL)
        return;
        if(root->left==NULL&&root->right==NULL)
        count++;
        counting(root->left,count);
        counting(root->right,count);
    }
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // write code here
        int count=0;
        counting(root,count);
        return count;
    }
    
};