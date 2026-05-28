#include<iostream>
#include<vector>
 using namespace std;
// //pair sum by brutforce method
// int main(){
//     int arr[]={2,7,11,15};
//     int target=11;
//     vector<int> nums;
//     for(int i=0;i<4;i++){
//         for(int j=i+1;j<4;j++){
//             if(arr[i]+arr[j]==target){
//                 nums.push_back(i);
//                 nums.push_back(j);
//             }
//         }
//     }
//     if(nums.size()==0){
//         cout<<"No such elements found"<<endl;
//         return 0;
//     }else{
//     cout<<"elements are at index :"<<nums[0]<<" and "<<nums[1]<<" : "<<
//     arr[nums[0]]<<" and "<<arr[nums[1]]<<endl;
//     }
//     return 0;
// }

//when array is sorted we can use two pointer approach
int main(){
    int arr[]={2,7,11,15};
    int target=9;
    int i=0;
    int j=3;
    vector<int> nums;
    while (i<j){
        if(arr[i]+arr[j]==target){
                nums.push_back(i);
                nums.push_back(j);
                break;
            }
        if(arr[i]+arr[j]<target){
            i++;
        }
        else{
            j--;
        }
    }
        
    
    if(nums.size()==0){
        cout<<"No such elements found"<<endl;
        return 0;
    }else{
    cout<<"elements are at index :"<<nums[0]<<" and "<<nums[1]<<" : "<<
    arr[nums[0]]<<" and "<<arr[nums[1]]<<endl;
    }
    return 0;
}