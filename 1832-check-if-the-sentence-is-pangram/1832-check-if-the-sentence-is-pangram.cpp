class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>ref(26,0);
        for(int i=0;i<sentence.size();i++)
        {
            ref[sentence[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(ref[i]==0)
            return false;
        }
        return true;
    }
};