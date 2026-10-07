class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int left=arr[0],right=arr[arr.size()-1],i=0,j=arr.size()-1;
        bool flag=false;
        if(arr.size()==1)
        return false;
        while(i+1<j)
        {
           
           if(left<right)
           {
               i++;
               left+=arr[i];
           }
           else
           {
               j--;
               right+=arr[j];
           }
        }
        if(left==right)
        return true;
        else
        return false;
    }
};
