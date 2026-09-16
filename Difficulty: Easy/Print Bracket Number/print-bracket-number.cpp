class Solution {
  public:

    vector<int> bracketNumbers(string &s) {
        // code here
        int c=0;
        stack<int>st;
        vector<int>v;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
               c++;
               st.push(c);
               v.push_back(c);
            }
            else
            {
                if(s[i]==')'&& !st.empty())
                {
                    v.push_back(st.top());
                    st.pop();
                }
                else
                {
                    if(s[i]==')')
                    {
                        c++;
                    v.push_back(c);
                    }
                }
            }
        }
        return v;
    }
};