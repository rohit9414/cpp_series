class Solution {
public:
    int minAddToMakeValid(string s) {
        int idx=0,count=0, flag=0;
        for(int i=0;i<s.size();i++)
        {
          if(s[i]=='(')
          {
            count++;
            flag++;
          }
          else
          {
            if(flag>0)
            {
              count--;
              flag--;
            }
            else
            {
                count++;
            }
          }
        }
        if(count>=0)
        return count;
        else return -(count);
    }
};