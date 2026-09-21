class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>v;
        deque<int>dq;
        dq.push_back(0);
        if(k==1)return nums;
        for(int i=1;i<k;i++)
        {
            if(nums[i]>nums[dq.front()])
            {
               dq.push_front(i); 
            }
            else
            {
                while(!dq.empty()&&nums[i]>nums[dq.back()])
                {
                    dq.pop_back();
                }
                dq.push_back(i);
            }
        }
        v.push_back(nums[dq.front()]);
        for(int i=k;i<nums.size();i++)
        {
            
            while(!dq.empty()&&dq.front()<=i-k)
            {
                dq.pop_front();
            }
            if(nums[i]>nums[dq.front()])
            {
                dq.push_front(i);
            }
            else
            {
                while(!dq.empty()&&nums[i]>nums[dq.back()])
                {
                    dq.pop_back();
                }
                dq.push_back(i);
            }
            v.push_back(nums[dq.front()]);
        }
        return v;
    }
};