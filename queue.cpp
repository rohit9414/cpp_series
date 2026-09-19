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
     return rear==n-1;
   }
   void push(int num)
   {
     if(isFull())
     {
       cout<<"stack is full.\n";
     }
     else if(rear==-1)
     {
       rear++;
       arr[rear]=num;
       front++;
        }
    else
    {
      rear++;
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
      front=rear=-1;
     }
     else
     {
       front++;
     }
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
        return 0;

}
