//kadanms algorithm
#include<iostream>
#include<climits>
using namespace std;
int main(){
int arr[]={3,-4,5,4,-1,7,-8};
int size = sizeof(arr)/sizeof(arr[0]);
int crsum=0;
int maxsum=INT_MIN;

    for(int i=0;i<size;i++){
        crsum+=arr[i];
        if(crsum>maxsum){
            maxsum=crsum;
        }
        if(crsum<0){
            crsum=0;
        }
    }
    cout<<maxsum<<endl;
}

// //Brute force method
// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {  int arr[]={2,4,-3,5,-6};
//     int max=INT_MIN;
    
//     for (int i=0;i<5;i++)
//     {
//         for(int j=i;j<5;j++){
//               int sum=0;
//            for(int k=i;k<=j;k++){
//              sum+=arr[k];
//              if(sum>max){
//                 max=sum;
//              }
//            }
          
//         }
        
//     }
//     cout<<"maximum subarray sum is \n"<<max<<endl;
//     return 0;
// }