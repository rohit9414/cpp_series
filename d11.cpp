
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
// majority element by brute force method
// int mjelement(vector<int> &num, int n){
//     for(int val:num){
        
//         int fr = 0;
//         for(int el:num){
//             if(el == val){
//                 fr++;
//             }
//         }
//         if(fr > n/2){
//             return val;
//         }
//     }
//     return -1;
// }


// majority element by sorting method
// int mjelement(vector<int> &num, int n){
//     sort(num.begin(),num.end());
//     int fr=1;
//     int ans=num[0];
//     for(int i=1;i<n;i++){
//         if(num[i]==num[i-1]){
//             fr++;
//     }else{
//         fr=1;
//         ans=num[i];
//         }
//     if(fr>n/2){
//     return ans;
//               }

// }
// return -1;
// }


// majority element by moore's voting algorithm
int mjelement(vector<int>&num,int n){
    int fr=0;
    int ans=0;
    for (int i=0;i<n;i++)
    {
        int val=num[i];
        if(fr==0){
           ans=val;
        }
        if(ans==val){
            fr++;
        }else{
            fr--;
        }
    }
   
return ans;
    
}

int main(){
vector<int> num={2,1,2,1,1};
int n=num.size();
int val=mjelement(num,n);
cout<<val<<endl;

}