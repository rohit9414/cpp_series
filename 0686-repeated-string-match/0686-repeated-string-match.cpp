class Solution {
public:
    void findlps(vector<int>&lps,string s)
        {   
            int first=0,second=1;
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
    int st_match(string a,string b)
    {   
        
        int first=0,second=0;
        vector<int>lps(b.size(),0);
        findlps(lps,b);
        while(first<a.size())
        {
            if(a[first]==b[second])
            {
                first++;
                second++;
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
             if(second==b.size())
                return 1;
        }
        return -1;
    }
    int repeatedStringMatch(string a, string b) {
        if(a==b)
        return 1;
        int repeat=1;
        string temp=a;

        while(temp.size()<b.size())
        {
            temp+=a;
            repeat++;
        }
        if(st_match(temp,b)==1)
        return repeat;
        if(st_match(temp+a,b)==1)
        return repeat+1;

        return -1;
    }
};