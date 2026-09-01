#include<iostream>
using namespace std;

void  sum_of_subsequnece(int arr[],int sum,int n,int idx,int *count,int tg){
       
        if(idx==n){
          if(sum==tg){
            (*count)++; 
        }
        return;
        }
        sum_of_subsequnece(arr,sum,n,idx+1,count,tg);//count already pointer ka address rakha hai isliye count ke saath yaha & nahi use karenge
        sum_of_subsequnece(arr,sum+arr[idx],n,idx+1,count,tg);
    }
int main(){
    int arr[]={1,2,3,6,4,7};
    int sum=0;
    int idx=0;
    int count=0;
    int target=8;
    sum_of_subsequnece(arr,sum,6,idx,&count,target);
    cout<<count<<endl;
}