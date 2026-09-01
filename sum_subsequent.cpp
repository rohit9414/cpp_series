#include<iostream>
using namespace std;
    void  sum_of_subsequnece(int arr[],int sum,int n,int idx){
        if(idx==n){
        cout<<sum<<endl;
        return;
        }
        sum_of_subsequnece(arr,sum,n,idx+1);
        sum_of_subsequnece(arr,sum+arr[idx],n,idx+1);
    }
int main(){
    int arr[]={1,2,3};
    int sum=0;
    int idx=0;
    sum_of_subsequnece(arr,sum,3,idx);
}