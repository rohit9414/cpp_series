class Solution {
public:
    string sortVowels(string s) {
        
        vector<int>lower(26,0),upper(26,0);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
            lower[s[i]-'a']++;
            s[i]='#';
            }
            else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                upper[s[i]-'A']++;
                s[i]='#';
            }

        }
        string vowels;
        for(int i=0;i<26;i++)
        { while(upper[i]--)
        {
          char c='A'+i; 
          vowels+=c;
        }         
        }
        for(int i=0;i<26;i++)
        { while(lower[i]--)
        {
          char c='a'+i; 
          vowels+=c;
        }         
        }
        int first=0, second=0;
        while(first<s.size())
        {
            if(s[first]=='#')
            {
                s[first]=vowels[second];
                
                second++;
            }
            first++;
        }

        return s;
    }
};