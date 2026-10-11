class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int row=mat.size()-1,col=mat[0].size()-1;
        //transpose
        for(int i=0;i<=row;i++)
        {
            for(int j=0;j<=col;j++)
            {   if(i<j)
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int i=0;i<=col;i++)
        {
            int f=0,s=row;
            while(f<s)
            {
                swap(mat[f][i],mat[s][i]);
                f++;s--;
            }
        }
    }
};
