class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int srt,end=INT_MIN,ans,mid,h=0,sum=0;
        for(int i=0;i<arr.size();i++)
        {
          
          end=max(end,arr[i]);
          sum+=arr[i];
        }
        srt=sum/k;
        if(!srt)
        return 1;
        
        while(srt<=end)
        {
            mid=srt+(end-srt)/2;h=0;
            for(int i=0;i<arr.size();i++)
           {
                 h+=arr[i]/mid;
                 if(arr[i]%mid)
                 h++;
           }
           
           if(h<=k)
           {
               ans=mid;
               end=mid-1;
           }
           else
           {
               srt=mid+1;
           }
        
        }
        return ans;
    }
};