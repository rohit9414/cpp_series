class MyStack {
public:
    MyStack() {
        
    }
    queue<int>q1;
    queue<int>q2;
    void push(int x) {
        if(!q1.empty())
        {
            q1.push(x);
        }
        else
        {
         q2.push(x);
        }
    }
    
    int pop() {
        int  val;
        if(q1.empty()&&q2.empty())
        {
            return -1;
        }
      else if(q1.empty())
      {
        while(q2.size()>1)
        {
           q1.push(q2.front());
           q2.pop();
        }
        val=q2.front();
        q2.pop();
      }
      else
      {
        while(q1.size()>1)
        {
             q2.push(q1.front());
             q1.pop();
        }
        val=q1.front();
        q1.pop();
      }
      return val;
    }
    
    int top() {
        if(q1.empty() && q2.empty())
        return -1;
        int  val;
        if(q1.empty()&&q2.empty())
        {
            return -1;
        }
      else if(q1.empty())
      {
        while(q2.size()>1)
        {
           q1.push(q2.front());
           q2.pop();
        }
        val=q2.front();
        q1.push(val);
        q2.pop();
      }
      else
      {
        while(q1.size()>1)
        {
             q2.push(q1.front());
             q1.pop();
        }
        val=q1.front();
        q2.push(val);
        q1.pop();
      }
      return val;
    }
    
    bool empty() {
        if(q1.empty()&&q2.empty())
        return true;
        else
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */