class Solution {
public:
    int search(vector<int>& nums, int target) {
        int srt=0,end=nums.size()-1,mid;
        while(srt<=end)
        {
            mid=srt+(end-srt)/2;
            if(target==nums[mid])
            return mid;
            if(nums[srt]<=nums[mid])
            {
                if(target<=nums[mid]&&target>=nums[srt])
                {
                    end=mid-1;
                }
                else
                {
                    srt=mid+1;
                }
            }
            else
            {
                if(target>=nums[mid]&&target<=nums[end])
                {
                    srt=mid+1;
                }
                else
                {
                    end=mid-1;
                }
            }
        }
  return -1;
    }
};