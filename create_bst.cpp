#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*left,*right;
    Node(int val)
    {
        data=val;
        left =right=NULL;
    }
};
Node*bst(Node*root,int val)
{
    if(!root)
    {
        return new Node(val);
    }
    if(val<root->data)
    {
        root->left=bst(root->left,val);
    }
    else
    {
        root->right=bst(root->right,val);
    }
    return root;
}
void pre(Node*root)
{
    if(!root){
        return ;
    }
    cout<<root->data<<" ";
    pre(root->left);
    pre(root->right);
}
int main()
{  
   Node*root;
   root=NULL;
   int arr[]={5,1,3,4,2,7};
   for(int i=0;i<6;i++)
   {
      root=bst(root,arr[i]);
   }
   pre(root);
   cout<<endl;
   return 0;
}
