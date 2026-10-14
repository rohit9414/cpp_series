/* Node Structure
class Node {
    int data;
    Node left;
    Node right;

    Node(int data) {
        this.data = data;
        left = nullptr;
        right = nullptr;
    }
}
*/

class Solution {
  public:
    int maxsum(Node *root,int &sum)
    {   if(!root)
        return 0;
        if(!root->right&&!root->left)
        return root->data;
        
        
        int left=maxsum(root->left,sum);
        int right=maxsum(root->right,sum);
        
        if(root->right&&root->left)
        {
        sum=max(sum,right+left+root->data);
        return max(right,left)+root->data;
        }
        if(root->right)
        return right+root->data;
        if(root->left)
        return left+root->data;
        
    }
    int maxPathSum(Node *root) {
        // code here
        int sum=INT_MIN;
        int val=maxsum(root,sum);//
        if(!root)
        return -1;
        if (sum == INT_MIN)
                    return -1;
        return sum;
        
        //if left or right subtree of main root node does not exist.
    }
};