class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1,last=-1,srt=0,end=nums.size()-1;

        while(srt<=end)
        {
            int mid=(srt+end)/2;
            if(nums[mid]==target)
            {
                first=mid;
                end=mid-1;
            }
            else if(target<nums[mid])
             end=mid-1;
            else
              srt=mid+1;
        }
        last=-1,srt=0,end=nums.size()-1;
        while(srt<=end)
        {
            int mid=(srt+end)/2;
            if(nums[mid]==target)
            {
                last=mid;
                srt=mid+1;
            }
            else if(target<nums[mid])
            end=mid-1;
            else
             srt=mid+1;
        }
    return {first,last};
    }
};