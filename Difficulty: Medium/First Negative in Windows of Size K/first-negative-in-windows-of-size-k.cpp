class Solution {
  public:
  
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // code here
        
        queue<int>q;
        vector<int>v;
        for(int i=0;i<k-1;i++)
        {   if(arr[i]<0)
              q.push(i);
        }
        for(int i=k-1;i<arr.size();i++)
        {   if(arr[i]<0)
              q.push(i);
            if(!q.empty())
             v.push_back(arr[q.front()]);
            else
             v.push_back(0);
            if(!q.empty()&&q.front()<=i-k+1) 
             q.pop();
        }
        return v;
    }
};