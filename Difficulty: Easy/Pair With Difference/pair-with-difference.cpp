
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        int i=0,j=1;
        sort(arr.begin(),arr.end());
        while(j<arr.size())
        {   
            if(arr[j]-arr[i]==x)
            return true;
            else if(arr[j]-arr[i]>x)
            {
                i++;
            }
            else
            {
                j++;
            }
            if(i==j)
            j++;
        }
        return false;
    }
};
