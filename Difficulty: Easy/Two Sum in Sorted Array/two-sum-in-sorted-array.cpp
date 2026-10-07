class Solution {
  public:
    vector<int> twoSum(vector<int>& arr, int target) {
        // code here
        vector<int>ans(2,-1);
        int i=0,j=arr.size()-1;
        while(i<j)
        {
            if(arr[i]+arr[j]==target)
            {
                ans[0]=i+1;
                ans[1]=j+1;
                return ans;
            }
            else if(arr[i]+arr[j]<target)
            {
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};