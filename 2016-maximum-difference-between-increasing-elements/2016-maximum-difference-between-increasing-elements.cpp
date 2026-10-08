class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int pmin=INT_MAX,mx=INT_MIN;
        for(int i=0;i<nums.size()-1;i++)
        {  pmin=min(pmin,nums[i]);
           if(pmin<nums[i])
           {
            
            mx=max(mx,nums[i+1]-pmin);
           }
        }
        if(mx>0)
        return mx;
        else
        return -1;
    }
};