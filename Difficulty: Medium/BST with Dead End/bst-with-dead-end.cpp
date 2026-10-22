/* Tree Node structure
class Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    bool dead(Node *root,int low,int upp)
    {
        if(!root)
        return 0;
        if(!root->left&&!root->right)
        {
            if(root->data-low==1&&upp-root->data==1)
            return 1;
            else
            return 0;
        }
        
        return dead(root->left,low,root->data)||dead(root->right,root->data,upp);
    }
    bool isDeadEnd(Node *root) {
        // Code here
        int low=0,upp=INT_MAX;
        return dead(root,low,upp);
    }
};