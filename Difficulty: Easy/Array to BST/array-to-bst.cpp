/*
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
};
*/

class Solution {
  public:
    Node* arrtobst(vector<int>&arr,int srt,int end)
    {
       if(srt>end)
       return NULL;
       int mid=(srt+end)/2;
       
       Node*root=new Node(arr[mid]);
       
       root->left=arrtobst(arr,srt,mid-1);
       root->right=arrtobst(arr,mid+1,end);
       return root;
    }
    Node* sortedArrayToBST(vector<int>& arr) {
        // code here
        
        int end=arr.size()-1;
       Node*root=arrtobst(arr,0,end);
       return root;
        
    }
};