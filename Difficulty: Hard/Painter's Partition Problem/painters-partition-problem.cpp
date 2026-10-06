class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
        long long mx=INT_MIN,sum=0;
        for(int i=0;i<arr.size();i++)
        {
            if(mx<arr[i])
              mx=arr[i];
            sum+=arr[i];
        }
        long long srt=mx,end=sum,ans,mid,count,paint;
        while(srt<=end)
        {   count=1;
            paint=0;
            mid=(srt+end)/2;
            for(int i=0;i<arr.size();i++)
            {  
               paint+=arr[i];
               if(paint>mid)
               {
                   paint=arr[i];
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