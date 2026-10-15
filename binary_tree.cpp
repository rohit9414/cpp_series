#include<iostream>
#include<queue>
using namespace std;

class node
{  public:
   int data;
   node*left,*right;
   node(int val)
   {
     data=val;
     left=right=NULL;
   }
};
void postorder(node* root) {
    if(root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{   
    queue<node*> q;
    int first,second;
    node* root = new node(1);
    q.push(root);
    while(!q.empty())
    {  node* temp=q.front();

        //left node
        cout<<"enter the left child of the elelment : "
        <<temp->data<<endl;
        cin>>first;
        if(first!=-1)
        {
        node*newnode=new node(first);
        temp->left=newnode;
        q.push(newnode);
        }
        //right node
        cout<<"enter the right child of the elelment : "
        <<temp->data<<endl;
        cin>>second;
        if(second!=-1)
        {
        node*newnode=new node(second);
        temp->right=newnode;
        q.push(newnode);
        }
       
        q.pop();
    }
    postorder(root);
    cout<<endl;
    return 0;
}