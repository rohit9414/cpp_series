class Solution {
public:
    string add(string str1,string str2)
    {   int index1=str1.size()-1;
        int index2=str2.size()-1;
        string ans;
        int carry=0;
        while(index2>=0)
        {
            int sum;
            char c;
            sum = (str1[index1]-'0')+(str2[index2]-'0')+carry;
            c='0'+sum%10;
            carry=sum/10;
            ans=c+ans;
            index1--; 
            index2--;
        }
        while(index1>=0)
        {
            int sum;
            char c;
            sum = (str1[index1]-'0')+carry;
            c='0'+sum%10;
            carry=sum/10;
            ans=c+ans;
            index1--; 
        }
        if(carry)
        return '1'+ans;
        else 
        return ans;
    }
    string addStrings(string num1, string num2) {
        if(num1.size()>=num2.size())
        return add(num1,num2);
        else
        return add(num2,num1);
    }
};