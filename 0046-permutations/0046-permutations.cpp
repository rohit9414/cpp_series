class Solution {
public:
    void permut(vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans,vector<bool>&visited){
        if(visited.size()==temp.size()){
            ans.push_back(temp);
            return ;
        }
        for(int i=0;i<visited.size();i++){
           if(visited[i]==0){
            temp.push_back(nums[i]);
            visited[i]=1;
            permut(nums,temp,ans,visited);
            temp.pop_back();
            visited[i]=0;
           }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        vector<bool>visited(nums.size(),0);
        permut(nums,temp,ans,visited);
        return ans;
    }
};