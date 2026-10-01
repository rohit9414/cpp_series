class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        vector<bool>count(256,0);
        int len=0;
        int first=0,second=0;
        while(second!=s.size())
        {
            if(count[s[second]]==1)
            {
                while(count[s[second]]!=0)
                {
                    count[s[first]]=0;
                    first++;
                }
            }
            count[s[second]]=1;
            len=max(len,second-first+1);
            second++;
        }
        return len;
    }
};
