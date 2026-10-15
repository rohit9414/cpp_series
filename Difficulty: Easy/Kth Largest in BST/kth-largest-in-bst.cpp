/* Structure of a Binary Tree Node
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
    void sumbst(Node*root,int &sum,int &count,int k)
        {
            if(!root)
            return;
            sumbst(root->right,sum,count,k);
            if(count>=k)
            return;
            count++;
            sum=root->data;
            sumbst(root->left,sum,count,k); 
        }
    int kthLargest(Node *root, int k) {
        // code here
        int sum=0,count=0;
                sumbst(root,sum,count,k);
                return sum;
    }
};