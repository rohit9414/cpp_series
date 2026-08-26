#include<iostream>
using namespace std;
    int pivote_ele(int arr[],int srt, int end){
        
        int pos =srt;
      for (int it = srt; it < end; it++) {
        if (arr[it] <= arr[end]) {
            swap(arr[pos], arr[it]);
            pos++;
        }
    }

        swap(arr[pos],arr[end]);
        return pos;
     }
void Quick(int arr[],int srt,int end){
    if(srt>=end){
        return ;
    }
    int pivot= pivote_ele(arr,srt,end);
    Quick(arr,srt,pivot-1);
    Quick(arr,pivot+1,end);
}
int main(){

    int arr[]={1,3,2,5,4,6};
    int size=(sizeof(arr)/sizeof(arr[0]))-1;
    Quick(arr,0,size);
      for (int i = 0; i < size+1; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}


