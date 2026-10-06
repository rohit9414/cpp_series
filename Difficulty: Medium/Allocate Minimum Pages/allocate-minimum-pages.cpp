class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        if(k>arr.size())
        return -1;
        long long mx=INT_MIN,sum=0;
        for(int i=0;i<arr.size();i++)
        {
            if(mx<arr[i])
            mx=arr[i];
            sum+=arr[i];
        }
        long long count,ans,srt=mx,end=sum;
        while(srt<=end)
        {
            long long mid=(srt+end)/2;
            count=1;long long pages=0;
            for(int i=0;i<arr.size();i++)
            {
                pages+=arr[i];
                if(pages>mid)
                {
                    pages=arr[i];
                    count++;
                }
            }
            
            if(count<=k)
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