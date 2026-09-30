class Solution {
  public:
    void rotateclockwise(string &s)
    {
        char c=s[s.size()-1];
        s.pop_back();
        s=c+s;
    }
    
    void rotateanticlockwise(string &s)
    {
        char c=s[0];
        s=s+c;
        s.erase(0,1); 
    }
    bool isRotated(string& s1, string& s2) {
        // code here
        if(s1.size()!=s2.size())
        return false;
        string test1=s2;
        string test2=s2;
        rotateclockwise(test1);
        rotateclockwise(test1);
        if(test1==s1)
        return true;
        rotateanticlockwise(test2);
        rotateanticlockwise(test2);
        if(test2==s1)
        return true;
        
        return false;
        
        
    }
};
