class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int srt=0,mid,end=arr.size()-1,ans=-1,n=0;
        while(srt<=end)
        {   mid=srt+(end-srt)/2;
            if(arr[mid]-mid-1>=k)
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                n=arr[mid]-mid-1;
                srt=mid+1;
            }
        }
        if(ans>=0)
        return ans+k;
        else
        return arr[arr.size()-1]-n+k;
    }
};