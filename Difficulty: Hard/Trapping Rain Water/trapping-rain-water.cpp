class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int mx=0,idx,water=0;
    for(int i=0;i<arr.size();i++)
    {
        if(mx<arr[i])
        {
            mx=arr[i];
            idx=i;
        }
    }
    
    int lmax=0;
    for(int i=0;i<idx;i++)
    {
        if(lmax-arr[i]>0)
        {
            water+=lmax-arr[i];
        }
        lmax=max(lmax,arr[i]);
    }
    int rmax=0;
    for(int i=arr.size()-1;i>idx;i--)
    {
        if(rmax-arr[i]>0)
        water+=rmax-arr[i];
        rmax=max(rmax,arr[i]);
    }
    return water;
    }
};