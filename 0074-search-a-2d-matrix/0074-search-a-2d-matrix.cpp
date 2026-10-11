class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if(matrix.empty()||matrix[0].empty())
        return false;
            int row=matrix.size(),col=matrix[0].size();
            int f=0,s=row*col-1;
              
                while(f<=s)
                {   int mid=(f+s)/2;
                    if(target==matrix[mid/col][mid%col])
                    return true;
                    else if(target<matrix[mid/col][mid%col])
                    s=mid-1;
                    else
                    f=mid+1;
                }
           
        
        return false;
    }
};