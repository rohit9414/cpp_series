class Solution {
  public:
    int getLPSLength(string &s) {
        // code here
        vector<int>lps(s.size(),0);
        int pre=0,suf=1;
        while(suf<s.size())
        {
            if(s[pre]==s[suf])
            {
                lps[suf]=pre+1;
                suf++;
                pre++;
            }
            else
            {
                while(s[pre]!=s[suf]&&pre!=0)
                {
                    pre=lps[pre-1];
                }
                if(s[pre]==s[suf])
                {
                    lps[suf]=pre+1;
                    suf++;pre++;
                }
                else
                {
                    lps[suf]=pre;
                    suf++;
                }
            }
        }
        return lps[s.size()-1];
    }
};