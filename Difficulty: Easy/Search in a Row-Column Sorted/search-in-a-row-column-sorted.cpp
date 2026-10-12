class Solution {
  public:
    bool matSearch(vector<vector<int>> &arr, int x) {
        // code here
        int i=0,j=arr[0].size()-1;
        while(i<arr.size()&&j>=0)
        {
            if(arr[i][j]==x)
            return true;
            else if(arr[i][j]<x)
            i++;
            else
            j--;
        }
        return false;
        
    }
};