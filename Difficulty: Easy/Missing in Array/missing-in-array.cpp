class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
    
        long long n=arr.size()+1,sum=0;
        long long mx=(n*(n+1))/2;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
        }
        return mx-sum;
    }
};