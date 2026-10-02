class Solution {
public:
    void findlps(vector<int>&lps,string s)
    {
        int first=0,second=1;
        lps[first]=0;
        while(second<s.size())
        {
            if(s[first]==s[second])
            {
                lps[second]=first+1;
                first++;
                second++;
            }
            else
            {
               if(first==0)
               {
               lps[second]=first;
               second++;
               }
               else
               {
                first=lps[first-1];
               }
            }
        }
        return;
    }
    int strStr(string haystack, string needle) {
        int first=0,second=0;
        vector<int>lps(needle.size(),0);
        findlps(lps,needle);
        while(first<haystack.size())
        {
            if(haystack[first]==needle[second])
            {
                first++;second++;
            }
            else
            {
                if(second==0)
                {
                    first++;
                }
                else
                {
                    second=lps[second-1];
                }
            }
            if(second==needle.size())
            return first-second;
        }
        return -1;
    }
};