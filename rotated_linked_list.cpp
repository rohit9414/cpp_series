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
node* rotated(node*head,int k){
    if(head->next==NULL){
        return head;
    }
     int count=0;
     node*temp=head;
     while (temp){
      count++;
      temp=temp->next;
     }
     k=k%count;
    if(k==0){
        return head;
    }
    count=count-k;
    node*ptr=NULL;
    temp=head;
    for(int i=1;i<count;i++){
        temp=temp->next;
    }
    ptr=temp->next;
    temp->next=NULL;
    temp=ptr;
    while(ptr->next){
        ptr=ptr->next;
    }
    ptr->next=head;
    head=temp;
    return head;
}

int main() {

    node* head = NULL;

    // Insert values
    insertNode_at_Beginning(10, head);
    insertNode_at_Beginning(20, head);
    insertNode_at_Beginning(30, head);
    insertNode_at_Beginning(40, head);
    printList(head);
    int k;
    cout<<"enter no of rotation: "<<endl;
    cin>>k;
    head=rotated(head,k);
    cout << "Original List: ";
    printList(head);
}