class Solution {
  public:
    int unique(string s)
    {
        vector<bool>count(256,0);
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(count[s[i]]==0)
            c++;
            count[s[i]]=1;
        }
        return c;
    }
    int findSubString(string& s) {
        // code here
        vector<int>count(256,0);
        int diff=unique(s);
        int first=0,second=0,len=s.size();
        while(second<s.size())
        {
            
               if(count[s[second]]==0)
                  diff--;
                count[s[second]]++;
                
            
            
               while(diff==0)
               {
                   len= min(len,second-first+1);
                   if(count[s[first]]==1)
                    diff++;
                    
                    count[s[first]]--;
                    first++;
                }
            second++;
               
           }
           
        
        return len;
    }
};