#include <iostream>
#include <vector>
using namespace std;
  
void permut(vector<int> &arr, vector<int> &temp, vector<vector<int>> &ans, int target){
             if(target==0){
                ans.push_back(temp);
                return;
             }
             if(target<0){
                return;
             }
             for (int i=0;i<arr.size();i++){
                temp.push_back(arr[i]);
                permut(arr,temp,ans,target-arr[i]);
                temp.pop_back();
             }
}
int main() {
    vector<int> arr;
    vector<int>temp;
    vector<vector<int>>ans;
    int target=7;
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(6);
    permut(arr, temp, ans,target);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}