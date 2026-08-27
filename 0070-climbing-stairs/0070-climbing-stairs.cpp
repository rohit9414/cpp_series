class Solution {
public:
    int climbStairs(int n) {
       long long int a=1;
       long long int b=1;
       long long int c;
        for(int i=1;i<n;i++){
            c=a+b;
            a=b;
            b=c;
          
        }
    
        return b;
    }
};