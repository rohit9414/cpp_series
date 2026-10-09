class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-2;i++)
        {
            int pos=i, first=i+1,second=arr.size()-1,temp=target-arr[i];
            while(first<second)
            {
                if(arr[first]+arr[second]==temp)
                {
                    return true;
                }
                else if(arr[first]+arr[second]<temp)
                first++;
                else
                second--;
            }
        }
        return false;
    }
};