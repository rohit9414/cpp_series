class Solution {
public:
    int mySqrt(int x) {
        int srt=0,end=x,ans;
        long long mid;
        while(srt<=end)
        {
            mid=(srt+end)/2;
            if(mid*mid==x)
             {
                ans=mid;
                break;
             }
            if(mid*mid<x)
            {  ans=mid;
               srt=mid+1;
            }
            else
            {   
                end=mid-1;
            }
        }
      return ans;
    }
};