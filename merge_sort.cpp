#include<iostream>
using namespace std;
void merge(int arr[],int srt,int mid,int end){
    int left =srt;
    int right =mid+1;
    int temp[end-srt+1];
    int idx=0;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[idx]=arr[left];
            idx++; left++;
        }else{
            temp[idx]=arr[right];
            idx++; right++;
        }
    }
    while(left<=mid){
        temp[idx]=arr[left];
        idx++; left++;
    }
    while(right<=end){
        temp[idx]=arr[right];
        idx++; right++;
    }
    idx=0;
    while(idx<=end-srt){
        arr[idx+srt]=temp[idx];
        idx++;
    }
}

void mergesort(int arr[],int srt,int end){
    if(srt>=end){
        return ;
    }
    int mid=srt + (end-srt)/2;
    mergesort(arr,srt,mid);
    mergesort(arr,mid+1,end);
    merge(arr,srt,mid,end);
}
int main(){
    int arr[]={4,3,6,5,8,2,9,5,7,8,4,2,3,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    mergesort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//time complexity->nlog(n)
//space complexity ->O(n)