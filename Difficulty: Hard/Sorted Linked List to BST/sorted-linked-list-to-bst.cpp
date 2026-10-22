/* structure of Linked List Node
class LNode {
public:
    int data;
    LNode* next;

    LNode(int x) {
        data = x;
        next = nullptr;
    }
};

// Tree Node
class TNode {
public:
    int data;
    TNode* left;
    TNode* right;

    TNode(int x) {
        data = x;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
     TNode *bst(int srt,int end,vector<int>&ans)
     {   if(srt>end)
         return NULL;
         int mid=srt+(end-srt+1)/2;
         TNode *root=new TNode(ans[mid]);
         root->left=bst(srt,mid-1,ans);
         root->right=bst(mid+1,end,ans);
         return  root;
     }
    TNode *sortedListToBST(LNode *head) {
        // code here
        vector<int>ans;
        while(head)
        {
            ans.push_back(head->data);
            head=head->next;
        }
        return bst(0,ans.size()-1,ans);
    }
};