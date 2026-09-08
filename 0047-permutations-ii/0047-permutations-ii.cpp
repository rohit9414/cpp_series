class Solution {
public:
void permut( vector<int>&arr,vector<vector<int>>&ans,int idx){
    if(idx==arr.size()){
        ans.push_back(arr);
        return ;
    }
    vector<bool>use(21,0);
    for(int i=idx;i<arr.size();i++){
        if(use[arr[i]+10]==0){
            swap(arr[i],arr[idx]);
            permut(arr,ans,idx+1);
            swap(arr[i],arr[idx]);
            use[arr[i]+10]=1;
        }
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        permut(nums,ans,0);
        return ans;
    }
};