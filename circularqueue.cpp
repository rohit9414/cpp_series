#include<iostream>
using namespace std;

class queue{

   int*arr;
   int front,rear;
   int n;
   public:
   queue(int size){
    front=rear=-1;
    arr = new int[size];
    n=size;
   }
   bool isEmpty()
   {
    return front==-1;
   }
   bool isFull()
   {
     return (rear+1)%n==front;
   }
   void push(int num)
   {
     if(isFull())
     {
       cout<<"stack is full.\n";
     }
     else if(rear==-1)
     {
       rear=(rear+1)%n;
       cout<<num<<" is sucessfully pushed at index "<<rear<<endl;
       arr[rear]=num;
       front=(front+1)%n;
       
        }
    else
    {
      rear=(rear+1)%n;
      cout<<num<<" is sucessfully pushed at index "<<rear<<endl;
      arr[rear]=num;
    }
  }
   void pop()
   {
     if(isEmpty())
     {
        cout<<"queue is empty\n";
     }
     else if(front==rear)
     {
      cout<<arr[front]<<" is sucessfully poped "<<endl;
      front=rear=-1;
     }
     else
     {
      cout<<arr[front]<<" is sucessfully poped from index "<<front<<endl;
       front=(front+1)%n;
     }
   }
   int frontEle()
   {
    return arr[front];
   }
   

};


int main()
{   queue q(5);
    // cout<<q.isEmpty()<<endl; 
    // cout<<q.isFull()<<endl;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.pop();
    q.push(6);
    q.frontEle();
   cout<< q.frontEle()<<endl;
        return 0;

}
