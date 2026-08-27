#include<iostream>
using namespace std;
void bubble(int arr[],int size){
    for (int j=0;j<size;j++){
        for (int i=0;i<size-j-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
    }
}
}
int main(){
    int arr[]={15,1,3,2,5,3,7,5};
   int size=8;
    bubble(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}