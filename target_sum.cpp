#include<iostream>
using namespace std;
    bool target_sum(int arr[],int tg,int n,int idx){
        if(tg==0){
            return 1;
        }
        if(idx==n || tg<0){
          return 0;
        }
        return target_sum(arr,tg,n,idx+1)||target_sum(arr,tg-arr[idx],n,idx+1);

    }
int main(){
    int arr[]={2,3,4,6};
    int target=1;
    int n=4;
    cout<<target_sum(arr,target,n,0)<<endl;                                                                                                
}