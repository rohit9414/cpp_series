class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
        vector<int>ans(1,1);
        int carry=0;
        while(n>1)
        {
            int mul;
            for(int i=0;i<ans.size();i++)
            {
            mul=ans[i]*n+carry;
            carry=mul/10;
            ans[i]=mul%10;
            }
             while(carry)
           {  
            ans.push_back(carry%10);
            carry=carry/10;
           }
            n--;
        }
       
        reverse(ans.begin(),ans.end());
        return ans;
    }
};