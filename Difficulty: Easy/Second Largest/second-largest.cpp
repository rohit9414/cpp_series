class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int ans=INT_MIN;
        int second=INT_MIN;
    
        for(int i=0;i<arr.size();i++)
        {
            ans=max(ans,arr[i]);
        }
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=ans)
            {
                second=max(arr[i],second);
            }
        }
        if(second==INT_MIN)
        return -1;
        else
        return second;
    }
};