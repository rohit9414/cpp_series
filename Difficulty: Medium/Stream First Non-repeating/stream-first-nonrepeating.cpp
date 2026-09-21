class Solution {
public:
    string firstNonRepeating(string &s) {

        string str, str2;
        vector<int> hash(26, 0);

        for(int i = 0; i < s.size(); i++)
        {
            hash[s[i] - 'a']++;

            if(hash[s[i] - 'a'] == 1)
            {
                str += s[i];
            }
            else
            {
                int idx = str.find(s[i]);

                if(idx != string::npos)
                {
                    str.erase(idx, 1);
                }
            }

            // Har character ke baad answer add karo
            if(!str.empty())
            {
                str2 += str[0];
            }
            else
            {
                str2 += '#';
            }
        }

        return str2;
    }
};