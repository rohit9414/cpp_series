class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        stack<int>st;
        vector<int>v(arr.size());
        int i=(arr.size())-1;
        for(i;i>=0;i--)
        {
            while(!st.empty()&&(arr[st.top()]<arr[i]))
            {
                v[st.top()]=st.top()-i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
        {
            v[st.top()]=st.top()-i;
            st.pop();
        }
        return v;
    }
};