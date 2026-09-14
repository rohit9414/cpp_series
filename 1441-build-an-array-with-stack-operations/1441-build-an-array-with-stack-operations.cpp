class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        vector<string>st;
        int j=0;
        
            for(int i=1;i<=n;i++)
            {   if(j==target.size())return st;
                if(i==target[j])
                {
                    st.push_back("Push");
                    j++;
                }
                else
                {   st.push_back("Push");
                    st.push_back("Pop");
                }
            }
        
    return st;
    }
};