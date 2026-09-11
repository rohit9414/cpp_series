#include<iostream>
using namespace std;

void Toh(int n,int src,int helper,int dest,int &count){
     if(n==1){
        cout<<"move disk "<<n<<" from rod "<<src<<" to rod "<<dest<<endl;
        count++;
        return;
     }

    Toh(n-1,src,dest,helper,count);
    cout<<"move disk "<<n<<" from rod "<<src<<" to rod "<<dest<<endl;
    count++;
    Toh(n-1,helper,src,dest,count);
}
int main(){
    int n;
    cout<<"enter no of disk: ";
    cin>>n;
    int count=0;
    Toh(n,1,2,3,count);
    cout<<"Total no of moves taken to move disk from source to destinatiom = "<<count<<" moves"<<endl;
    return 0;
}