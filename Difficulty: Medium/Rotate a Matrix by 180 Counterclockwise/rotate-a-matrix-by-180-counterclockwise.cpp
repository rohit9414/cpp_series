class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int row=mat.size(),col=mat.size();
        for(int i=0;i<col;i++)
        {
            int f=0,s=row-1;
            while(f<s)
            {
                swap(mat[f][i],mat[s][i]);
                f++;s--;
            }
        }
        for(int i=0;i<row;i++)
        {
            int f=0,s=col-1;
            while(f<s)
            {
                swap(mat[i][f],mat[i][s]);
                f++;s--;
            }
        }
    }
    
};