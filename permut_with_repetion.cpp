#include<iostream>
#include<vector>
using namespace std;
void permut(vector<int>&arr,vector<vector<int>>&ans,int idx){
    if(idx==arr.size()){
        ans.push_back(arr);
        return;
    }
    vector<bool>use(21,0);
    for(int i=idx;i<arr.size();i++){
        if(use[arr[i]+10]==0){
            swap(arr[i],arr[idx]);
            permut(arr,ans,idx+1);
            swap(arr[i],arr[idx]);
            use[arr[i]+10]=1;
        }
    }
}
int main(){
    vector<int>arr;
  
    vector<vector<int>>ans;
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
   
   
    permut(arr,ans,0);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}