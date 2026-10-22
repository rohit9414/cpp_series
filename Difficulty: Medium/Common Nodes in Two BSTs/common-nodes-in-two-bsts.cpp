/* Structure of a Binary Search Tree node
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
    void common(Node* r1, Node* r2,stack<Node*>&st1,stack<Node*>&st2,vector<int>&ans)
    {
        while(r1)
        {
            st1.push(r1);
            r1=r1->left;
        }
        while(r2)
        {
            st2.push(r2);
            r2=r2->left;
        }
        while(!st1.empty()&&!st2.empty())
        {
            if(st1.top()->data==st2.top()->data)
            {
                ans.push_back(st1.top()->data);
                r1=st1.top()->right;
                st1.pop();
                
                r2=st2.top()->right;
                st2.pop();
                
            }
            else if(st1.top()->data<st2.top()->data)
            {
                r1=st1.top()->right;
                st1.pop();
            }
            else
            {
                r2=st2.top()->right;
                st2.pop();
            }
            while(r1)
           {
            st1.push(r1);
            r1=r1->left;
           }
            while(r2)
           {
            st2.push(r2);
            r2=r2->left;
           }
            
        }
        
    }
    vector<int> findCommon(Node* r1, Node* r2) {
        // code here
        vector<int>ans;
        stack<Node*>st1,st2;
        common(r1,r2,st1,st2,ans);
        return ans;
    }
};