class Solution {
public:
    string minRemoveToMakeValid(string s) {
      stack<char>st;
      for(int i=0;i<s.size();i++)
      {
         if(s[i]=='(')
         {
            st.push(s[i]);
         }
         else
         {
            if(s[i]==')')
            {
                if(!st.empty())
            {
                st.pop();
            }
            else
            {
                s.erase(i,1);
                i--;
            }
            }
         }
      }
      while(!st.empty())
      {
        int pos=s.rfind(st.top());
        s.erase(pos,1);
        st.pop();
      } 
      return s;
    }
};