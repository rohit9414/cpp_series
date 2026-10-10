class Solution {
  public:
    vector<vector<int>> triplets(vector<int> &arr) {
         // code here
         vector<vector<int>>ans;
         sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {   if(i>0&&arr[i]==arr[i-1])
                 continue;
            int first=i+1,second=arr.size()-1;
            while(first<second)
            {
                if(arr[i]+arr[first]+arr[second]==0)
                {
                    ans.push_back({arr[i],arr[first],arr[second]});
                    first++;second--;
                    while(arr[first]==arr[first-1])
                       first++;
                    while(arr[second]==arr[second+1])
                    second--;
                }
                else if(arr[i]+arr[first]+arr[second]<0)
                first++;
                else
                second--;
            }
        }
        return ans;
    }
};
