#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    // initialization of node using constructor
    node(int value)
    {
        data=value;
        next=NULL;
    }
};
void insertNode_at_Begninning(int value,node* &head){//head is passing as reference using & operator it changes the value of head in main function also
    node *temp;
    temp=new node(value);
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}

void insertNode_at_End(node* head,int value)
{
    node* temp,*ptr;
    temp=new node(value);
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
           ptr=ptr->next;
        }
        ptr->next=temp;
    }
}

void insertNode_in_between(node* head,int value,int pos)
{
    node* temp,*ptr;
    temp=new node(value);
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        ptr=head;
        for(int i=1;i<pos-1;i++)
        {
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }
}

void delete_node(node *head,int pos)
{
    node* temp,*ptr;
    temp=head;
    if(pos==1){
        head=temp->next;
        delete temp;
    }else {
        for(int i=1;i<pos-1;i++){
            temp=temp->next;
        }
        if(temp->next->next==NULL)
        {
          ptr=temp->next;
          temp->next=NULL;
          delete ptr;
        }
        else
        {
        ptr=temp->next;
        temp->next=temp->next->next;
        delete ptr;
        }

    }

}

void print(node*head){//head is passing as value it does not change the value of head in main function
    node*temp=head;
    while(temp)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node *head=NULL;
    insertNode_at_Begninning(10,head);
    insertNode_at_Begninning(20,head);
    insertNode_at_Begninning(40,head);
    insertNode_at_Begninning(50,head);
    insertNode_at_Begninning(60,head);
    insertNode_at_End(head,100);
    insertNode_at_End(head,200);
    insertNode_at_End(head,300);
    insertNode_in_between(head,500,3);
    delete_node(head,3);
    delete_node(head,8);
    // cout<<head<<endl;
    print(head);
    // cout<<head<<endl;
    return 0;

}