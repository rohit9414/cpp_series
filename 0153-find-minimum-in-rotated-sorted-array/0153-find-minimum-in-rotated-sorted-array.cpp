class Solution {
public:
    int findMin(vector<int>& nums) {
        int srt=0, end=nums.size()-1,ans=nums[0],mid;
        while(srt<=end)

        {
            mid=(srt+end)/2;
            if(nums[0]<=nums[mid])
            {
                srt=mid+1;
            }
            else
            {
                ans=nums[mid];
                end=mid-1;
            }
        }
        return ans;
    }
};