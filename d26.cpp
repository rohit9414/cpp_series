#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
// vector .
//it is dynamic in size or dynamic array.
int main(){
    
    vector<int> arr(2,0);//that means first 2 values are initialized by zero.
    cout<<arr.size()<<endl;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
 }