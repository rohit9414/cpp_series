class Solution {
  public:
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        int srt=1,mid,end=0,pos,count,ans,mx=0;
        
        sort(arr.begin(),arr.end());
        end=arr[arr.size()-1]-arr[0];
        while(srt<=end)
        {
            mid=srt+(end-srt)/2;
            count=1;pos=arr[0];
            for(int i=0;i<arr.size();i++)
            {
                if(pos+mid<=arr[i])
                {
                    count++;
                    pos=arr[i];
                }
            }
            if(count<k)
            {
                end=mid-1;
            }
            else
            {
                ans=mid;
                srt=mid+1;
            }
        }
        return ans;
    }
};