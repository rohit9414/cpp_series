class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        stack<int>st;int i=0;
        int size=mat.size();
        if(size==1||size==0)return 0;
        for(int i=size-1;i>=0;i--)
        {
            st.push(i);
        }
        while(st.size()>1)
        {
            int first=st.top();
            st.pop();
            int second=st.top();
            st.pop();
            if(mat[first][second]&&!mat[second][first])
            {
                st.push(second);
            }
            else if(!mat[first][second]&&mat[second][first])
            {
                st.push(first);
            }
        }
        if(st.empty())return -1;
        int num=st.top();
        st.pop();
        int yes=0,no=0;
        for(int i=0;i<size;i++)
        {
            if(num!=i)
            {
                yes=yes+mat[i][num];
                no=no+mat[num][i];
            }
        }
      return yes==size-1&&no==0?num:-1;  
        
    }
};