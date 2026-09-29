class Solution {
public:
    int longestPalindrome(string s) {
        int lower[26]={0};
        int upper[26]={0};

        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=97)
               upper[s[i]-'a']++;
            else
               lower[s[i]-'A']++;           
        }
        int count=0;
        bool flag=0;
        for(int i=0;i<26;i++)
        {
            if(upper[i]%2==0)
            {
                count+=upper[i];
            }
            else
            {
                count+=upper[i]-1;
                flag=1;
            }
            if(lower[i]%2==0)
            {
                count+=lower[i];
            }
            else
            {
                count+=lower[i]-1;
                flag=1;
            }
        }
        if(flag)
        count++;
        return count;
     }
};