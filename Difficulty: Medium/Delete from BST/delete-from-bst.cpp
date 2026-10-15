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
    Node* delNode(Node* root, int x) {
        // code here
        if(!root)
        return NULL;
        if(root->data>x)
         {
             root->left=delNode(root->left,x);
             return root;
         }
        else if(root->data<x)
        {
             root->right=delNode(root->right,x);
             return root;
        }
        else
        {
            if(!root->left&&!root->right)
            {
                delete root;
                return NULL;
            }
            else if(!root->left&&root->right)
            {
                Node*temp=root->right;
                delete root;
                return temp;
            }
            else if(root->left&&!root->right)
            {
                Node*temp=root->left;
                delete root;
                return temp;
            }
            else
            {
                Node*parent,*child;
                parent=root;
                child=root->right;
                while(child->left)
                {
                    parent=child;
                    child=child->left;
                }
                if(parent!=root)
                {
                    parent->left=child->right;
                    child->right=root->right;
                    child->left=root->left;
                    delete root;
                    return child;
                }
                else
                {
                    child->left=root->left;
                    delete root;
                    return child;
                }
            }
        }
    }
};