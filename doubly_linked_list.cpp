#include<iostream>
using namespace std;
class node
{
   public:
   int data;
   node*prev;
   node*next;
   node(int data)
   { 
      this->data=data;
      prev=NULL;
      next=NULL;    
   }
};
void insert_node(node*&head,int data)
{    node*temp=new node(data);
     if(head==NULL)
     {
       head=temp;
     }
     else
     {
       temp->next=head;
       head->prev=temp;
       head=temp;
     }
}
void print(node*head)
{
   while(head)
   {
      cout<<head->data<<"->";
      head=head->next;
   }
   cout<<"NULL"<<endl;
}
bool checkPolindrom(node*head)
{  node*first=head,*second=head;
   while(second->next)
   {
     second=second->next;
   }
   while(first != second && first->prev != second)
   {
      if(first->data!=second->data)
      {
         return false;
      }
     first= first->next;
     second=second->prev;
   }
   return true;
}
int main()
{   node*head=NULL;
    insert_node(head,10);
    insert_node(head,20);
    
    insert_node(head,20);
    insert_node(head,10);
    print(head);
    cout<<checkPolindrom(head)<<endl;
    return 0;
}