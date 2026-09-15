class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='#')
            {
               st.push(s[i]); 
            }
            else if(!st.empty())
            {
                st.pop();
            }
            
        }
        s.erase(0,s.size());
        while(!st.empty())
        {
            s=st.top()+s;
            st.pop();
        }
    for(int i=0;i<t.size();i++)
        {
            if(t[i]!='#')
            {
               st.push(t[i]); 
            }
            else if(!st.empty())
            {
                st.pop();
            }
            
        }
        t.erase(0,t.size());
        while(!st.empty())
        {
            t=st.top()+t;
            st.pop();
        }
        if(s==t)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};