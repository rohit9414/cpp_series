class Solution {
public:
    void subsequence(vector<int>& nums,vector<int>temp,vector<vector<int>>& ans,int size,int idx){
        if(idx==size){
            ans.push_back(temp);
            return;
        }
        
        subsequence(nums,temp,ans,size,idx+1);
        temp.push_back(nums[idx]);
        subsequence(nums,temp,ans,size,idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int size=nums.size();
        int idx=0;
        subsequence(nums,temp,ans,size,idx);
     return ans;   
    }
    
};