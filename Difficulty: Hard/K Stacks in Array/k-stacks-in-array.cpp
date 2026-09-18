class node{
    public:
    int index;
    node*next;
    node(int x)
    {
        index=x;
        next=NULL;
    }
};

class kStacks {

    // main array to store elements
    int *arr;
    node**top;
    stack<int>st;
    int k;

  public:
    kStacks(int n, int k) {
        // initialize data structures for k stacks
        arr=new int[n];
        top=new node*[k];
        for(int i=0;i<k;i++)
        top[i]=NULL;
        for(int i=0;i<n;i++)
        st.push(i);
        this->k=k;
        
    }

    void push(int x, int i) {
        // push element x into stack i
        
        if(st.empty())
         return;
         
         
             node*temp=new node(st.top());
             temp->next=top[i];
             top[i]=temp;
             arr[st.top()]=x;
             st.pop();
         
    }

    int pop(int i) {
        // pop element from stack i
       
        if(top[i]==NULL)
        return -1;
        node*temp=top[i];
        int element=top[i]->index;
        st.push(element);
        top[i]=top[i]->next;
        delete temp;
        return arr[element];
    }
};