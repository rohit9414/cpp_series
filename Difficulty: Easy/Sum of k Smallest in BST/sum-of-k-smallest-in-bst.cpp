/* Structure of a Tree Node
class Node {
    int data;
    Node* right;
    Node* left;
    Node(int x){
        data = x;
        right = nullptr;
        left = nullptr;
    }
}; */

class Solution {
  public: 
    void sumbst(Node*root,int &sum,int &count,int k)
    {
        if(!root)
        return;
        sumbst(root->left,sum,count,k);
        if(count>=k)
        return;
        count++;
        sum+=root->data;
        sumbst(root->right,sum,count,k); 
    }
    int sum(Node* root, int k) {
        // code here
        int sum=0,count=0;
        sumbst(root,sum,count,k);
        return sum;
    }
};