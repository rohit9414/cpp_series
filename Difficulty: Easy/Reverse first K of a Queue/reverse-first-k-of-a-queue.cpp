class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        stack<int>st;
        if(q.size()<k)
        return q;
        while(k--)
        {
            st.push(q.front());
            q.pop();
        }
        int size=q.size();
        while(!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
        while(size--)
        {
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};