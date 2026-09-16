class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        stack<int>st;
        vector<int>v(arr.size(),-1);
        for(int i=0;i<arr.size();i++)
        {
            if(st.empty())
            {
                st.push(i);
            }
            else
            {
                while(!st.empty()&&arr[st.top()]<arr[i])
                {
                    v[st.top()]=arr[i];
                    st.pop();
                }
                st.push(i);
            }
        }
        return v;
    }
};