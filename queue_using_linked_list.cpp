#include<iostream>
using namespace std;
class node{
protected:
    int data;
    node*next;
public:
    node() {
        data = 0;
        next = NULL;
    }

    node(int val){
     data=val;
     next=NULL;
    }
};
class queue:public node{
    node *front, *rear;
    public:
    queue()
    {
        front = rear = NULL;
    }
    bool isEmpty()
    {
        return rear==NULL;
    }
    void push(int val)
    {
        node*temp = new node(val);
        if(rear == NULL)
        {
            front = rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }
    }
    void pop()
    {   node*temp; 
        if(front==rear)
        {
            temp=front;
            front=rear=NULL;
        }
        else
        {
        temp=front;
        front=front->next;
        delete temp;
        }
    }
    int frontele()
    {
        return front->data;
    }
};
int main()
{
    queue q;
    cout<<q.isEmpty()<<endl;
    q.push(1);
    cout<<q.isEmpty()<<endl;
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.frontele()<<endl;

    return 0;
}