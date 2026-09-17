class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        vector<int>vl(heights.size()),vr(heights.size());
        
        for(int i=(heights.size())-1;i>=0;i--)
        {
            while(!st.empty()&&(heights[st.top()]>heights[i]))
            {
                vl[st.top()]=st.top()-i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
        {
            vl[st.top()]=st.top()-(-1);
            st.pop();
        }
     
    for(int j=0;j<heights.size();j++)
    {   
        while(!st.empty()&&(heights[st.top()]>heights[j]))
            {
                vr[st.top()]=j-st.top();
                st.pop();
            }
            st.push(j);
            
    }   
      while(!st.empty())
        {
            vr[st.top()]=heights.size()-st.top();
            st.pop();
        }
        int mx=0;
    for(int j=0;j<heights.size();j++)
    {
         mx=max(mx,(heights[j]*(vl[j]+vr[j]-1)));
    }
    return mx;    
       
    }
};