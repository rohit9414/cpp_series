class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int row=mat.size(),col=mat[0].size();
                if(mat.empty()||mat[0].empty())
                return false;
                for(int i=0;i<row;i++)
                {   int f=0,s=col-1;
                    if(mat[i][f]<=x&&x<=mat[i][s])
                    {   
                        while(f<=s)
                        {   int mid=(f+s)/2;
                            if(x==mat[i][mid])
                            return true;
                            else if(x<mat[i][mid])
                            s=mid-1;
                            else
                            f=mid+1;
                        }
                    }
                }
                return false;
    }
};