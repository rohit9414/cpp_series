#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node*prev;
    node(int data)
    {
      this->data=data;
      prev=next=NULL;
    }
};

node* create_list(int arr[],node*back,int size,int idx)
{
    if(idx==size)
    {
        return NULL;
    }
    node*temp=new node(arr[idx]);
    temp->prev=back;
    temp->next=create_list(arr,temp,size,idx+1);
    return temp;
}

void print(node*head){
    while(head)
    {
       cout<<head->data<<" ";
       head= head->next;
    }
    cout<<endl;
}

int main()
{   node*back=NULL,*head=NULL;
    int arr[]={1,2,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int idx=0;
    head=create_list(arr,back,size,idx);
    print(head);
    return 0;
}