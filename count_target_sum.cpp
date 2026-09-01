#include<iostream>
using namespace std;

int count_sum_of_subsequnece(int arr[],int n,int idx,int tg){
        if(tg==0){
             return 1;
        }
        if(idx==n||tg<0){
         return 0;
        
        }
       return count_sum_of_subsequnece(arr,n,idx+1,tg) + count_sum_of_subsequnece(arr,n,idx+1,tg-arr[idx]);
        
    }
int main(){
    int arr[]={1,2,3,6,4,7};
    int sum=0;
    int idx=0;
    int target=8;
    
    cout<<count_sum_of_subsequnece(arr,6,idx,target)<<endl;
}