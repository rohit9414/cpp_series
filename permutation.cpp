#include<iostream>
#include<vector>
using namespace std;
// void permut(int arr[],vector<int>&temp,vector<vector<int>>&ans,vector<bool>&visited){
    
    
//     for(int i=0;i<visited.size();i++){
//         if(visited.size()==temp.size()){
//         ans.push_back(temp);
//         return ;}
//     if(visited[i]==0){
//         temp.push_back(arr[i]);
//         visited[i]=1;
//         permut(arr,temp,ans,visited);
//         temp.pop_back();
//         visited[i]=0;
//     }
//     }
// }
// int main(){
//     int arr[]={1,2,3};
//     vector<int>temp;
//     vector<vector<int>> ans;
//     vector<bool>visited(3,0);

//     permut(arr,temp,ans,visited);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }

//method 2
void permut(vector<int>& arr,vector<vector<int>>&ans,int idx){
    if(idx==arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i=idx;i<arr.size();i++){
        swap(arr[i],arr[idx]);
        permut(arr,ans,idx+1);
        swap(arr[i],arr[idx]);
    }
}
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    vector<vector<int>> ans;
    permut(arr,ans,0);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}