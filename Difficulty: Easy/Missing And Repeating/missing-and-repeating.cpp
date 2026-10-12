class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n=arr.size(),mis=0,rep=0;
        vector<int>hash(n+1);
        for(int i=0;i<n;i++)
        {
            hash[arr[i]]++;
            
        }
        for(int i=1;i<n+1;i++)
        {
            if(hash[i]==0)
            mis=i;
            if(hash[i]>1)
            rep=i;
        }
        return {rep,mis};
    }
};