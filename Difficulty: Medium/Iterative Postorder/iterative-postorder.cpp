/* Binary Tree Node Structure
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    void pre(Node*root,vector<int>&v)
    {
        stack<Node*>st;
        if(!root)
        return;
        st.push(root);
        while(!st.empty())
        {
            Node*temp=st.top();
            st.pop();
            v.push_back(temp->data);
            if(temp->left)
            st.push(temp->left);
            if(temp->right)
            st.push(temp->right);
        }
        int i=0,j=v.size()-1;
        while(i<j)
        {
            swap(v[i],v[j]);
            i++;
            j--;
        }
        return;
    }
    vector<int> postOrder(Node* root) {
        // code here
        vector<int>ans;
        pre(root,ans);
        return ans;
    }
};