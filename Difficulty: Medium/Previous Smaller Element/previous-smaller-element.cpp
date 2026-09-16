class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        stack<int>st;
        vector<int>v(arr.size(),-1);
        for(int i=arr.size()-1;i>=0;i--)
        {
         
            
                while(!st.empty()&&(arr[i]<arr[st.top()]))
                {
                    v[st.top()]=arr[i];
                    st.pop();
                }
            st.push(i);
            
        }
        return v;
    }
};