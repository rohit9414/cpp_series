class Solution {
  public:
    int minChar(string &s) {
        // code here
        string str=s;
       
        reverse(str.begin(),str.end());
        s+="$";
        s+=str;
         vector<int>lps(s.size(),0);
        int pre=0,suf=1;
        while(suf<s.size())
        {
            if(s[pre]==s[suf])
            {
                lps[suf]=pre+1;
                pre++;
                suf++;
            }
            else
            {
                if(pre==0)
                {
                    
                    suf++;
                }
                else
                {
                    pre=lps[pre-1];
                }
            }
        }
        return str.size()-lps[lps.size()-1];
    }
};
