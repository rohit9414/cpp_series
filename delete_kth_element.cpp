#include <iostream>
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

// Insert at beginning
void insertNode_at_Beginning(int value, node*& head) {
    node* temp = new node(value);
    temp->next = head;
    head = temp;
}

// Print linked list
void printList(node* head) {
    node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

node* delete_kth(node* head, int k) 
{
    node*prev=NULL,*curr=head;
    int c=1;
    if(k==1)return NULL;
    while(curr)
    {  

    
        if(c%k==0)
        {
           
            prev->next=curr->next;
            
            node*temp=curr;
            delete temp;
            curr=prev->next;
            c++;
          
        }
        else
        {
            prev=curr;
            curr=curr->next;
            c++;
        }

    }
    return head;
}

int main() {
    node* head = NULL;

    // Insert values
    insertNode_at_Beginning(10, head);
    insertNode_at_Beginning(20, head);
    insertNode_at_Beginning(30, head);
    insertNode_at_Beginning(40, head);

    cout << "Original List: ";
    printList(head);

    head = delete_kth(head, 1);
    cout << "After deleting 2nd node: ";
    printList(head);

    return 0;
}