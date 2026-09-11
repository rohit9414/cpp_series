#include<iostream>
#include<vector>
using namespace std;

// int win(vector<bool>&vec,int n,int k,int idx,int pl){
//        if(pl==1){
//         for(int i=0;i<n;i++){
//             if(vec[i]==0){
//             return i+1;
//             }
//         }
        
//         }
//         int kill=k-1;
//         if(kill==0){
//             vec[idx]=1;
//             idx=(idx+1)%n;
//             pl=pl-1;
//         }else{
            
//         while(kill){
//             if(vec[idx]==0){
//                 kill=kill-1;
//             }
//             idx=(idx+1)%n;
//             while(vec[idx]==1){
//              idx=(idx+1)%n;
//         }
//         }
//         vec[idx]=1;
//         pl=pl-1;
//         }
        
//       return  win(vec,n,k,idx,pl);
// }
// int main(){
//     int n,k;
//     cout<<"enter no of person : "<<endl;
//     cin>>n;
//     cout<<"enter killing target: "<<endl;
//     cin>>k;
//     vector<bool>vec(n,0);
//     cout<<win(vec,n,k,0,n)<<endl; 
//     return 0;
// }T.c=O(n^2), S.C=O(n)

//optimized way

int win(int n,int k){
    if(n==0){
        cout<<"atleast one person shoud be present"<<endl;
        return -1;
    }
    if(n==1){
        return 0;
    }
    return (win(n-1,k)+k)%n;
}
int main(){
    int n,k;
    cout<<"enter no of person : "<<endl;
    cin>>n;
    cout<<"enter killing target: "<<endl;
    cin>>k;
    cout<<win(n,k)+1<<endl;
    
}