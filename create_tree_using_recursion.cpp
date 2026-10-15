#include<iostream>
using namespace std;

class node
{   public:
    int data;
    node*left,*right;
    node(int val)
    {
       data=val;
       left=right=NULL;
    }
};
//  void createnode(node*root){
//     int x,y;
//     //inserting left child
//     cout<<"enter left child of node : "<<root->data<<endl;
//     cin>>x;
//     node*temp1;
//     if(x!=-1)
//     {
//     temp1=new node(x);
//     root->left=temp1;
//     createnode(temp1);
//     }
//     //inserting right child
//     cout<<"enter right child of node : "<<root->data<<endl;
//     cin>>y;
//     node*temp2;
//     if(y!=-1)
//     {
//     temp2=new node(y);
//     root->right=temp2;
//     createnode(temp2);
//     }
//     return ;
// }

//optimal solution
node*createnode()
{   int x;
    cin>>x;
    if(x==-1)
    return NULL;
    node*root =new node(x);
    cout<<"enter left chile of node : "<<root->data<<endl;
    root->left=createnode();
    cout<<"enter right child of node : "<<root->data<<endl;
    root->right=createnode();
    return root;
}
void preorder(node*root)
{   node*temp=root;
    if(temp==NULL)
    return;
    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);
}
int main()
{   int val;
    cout<<"enter root node value : "<<endl;
   
    node*root=createnode();
    
    preorder(root);
    cout<<endl;
    return 0;
}