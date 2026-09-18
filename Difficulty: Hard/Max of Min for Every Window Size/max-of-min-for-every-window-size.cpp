class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) {
        //  code here
        stack<int>st;
        vector<int>ans(arr.size());
        int range=0;
        // using concept of next mim right and next min left.
        for(int i=0;i<arr.size();i++)
        {
            
                while(!st.empty()&&arr[st.top()]>arr[i])
                {   int index=st.top();
                    st.pop();
                    if(st.empty())
                    {
                        range=i;
                    }
                    else
                    {
                    range=i-st.top()-1;
                    }
                    ans[range-1]=max(ans[range-1],arr[index]);
                    
                }
                st.push(i);
            
        }
        while(!st.empty())
        {
            int index=st.top();
                    st.pop();
                    if(st.empty())
                    {
                        range=arr.size();
                    }
                    else
                    {
                    range=arr.size()-st.top()-1;
                    }
                    ans[range-1]=max(ans[range-1],arr[index]);
        }
        int num=ans[ans.size()-1];
        for(int i=arr.size()-2;i>=0;i--)
        {
            ans[i]=max(ans[i],ans[i+1]);
        }
        return ans;
        
    }
};