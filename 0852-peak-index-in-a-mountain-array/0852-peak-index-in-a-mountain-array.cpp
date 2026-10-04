class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int srt=0,end=arr.size()-1,mid,pos;
        while(srt<=end)
        {    mid =end+(srt-end)/2;
            if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1])
            {
                return mid;
            }
            else if(arr[mid-1]<arr[mid])
            {
                srt=mid+1;
            }
            else
            end=mid-1;
        }
        return -1;
    }
};