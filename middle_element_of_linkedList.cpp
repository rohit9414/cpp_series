#include<iostream>
using namespace std;
class node {
public:
    int data;
    node* next;

    node(int value) {
        data = value;
        next = NULL;
    }
};
void insertNode_at_Beginning(int value, node*& head) {

    node* temp = new node(value);

    temp->next = head;
    head = temp;
}

void printList(node* head) {

    node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}
bool polindrom(node*head){
    node*slow,*fast,*prev=NULL;
    slow=head;
    fast=head;
    if(head == NULL || head->next == NULL)
    return true;
    
    while(fast and fast->next){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast){
        prev=slow;
        slow=slow->next;
        prev->next=NULL;
    }else{
       prev->next=NULL;
        
    }
    // the second list
    node*temp=NULL,*next=slow->next;
    while(slow){
        node* next = slow->next;

        slow->next = temp;
        temp = slow;
        slow = next;
    }
    slow=temp;
    node*head1=head;
    while(slow){
       if(head1->data!=slow->data){
        return false;
       }
    
       slow=slow->next;
       head1=head1->next;
    }
    return true;
}
int main()
{ 
    node* head = NULL;

    // insertNode_at_Beginning(1, head);
    // insertNode_at_Beginning(2, head);
    // insertNode_at_Beginning(3,head);
    // insertNode_at_Beginning(4,head);
    // insertNode_at_Beginning(2, head);
    // insertNode_at_Beginning(1, head);
    printList(head);
    cout<<polindrom(head)<<endl;
    return 0;
}