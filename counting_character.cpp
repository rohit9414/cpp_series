#include<iostream>
using namespace std;
void count(string str,int n){
    int arr[26]={};
    for(int i=0;i<n;i++){
        arr[int(str[i])-int('A')]++;
    }
   for(int i=0;i<26;i++){
    if(arr[i]!=0){
        cout<<char(int('A')+i)<<" "<<arr[i]<<endl;
    }
   }
}
int main(){
    string str="ABBBAABBACCCKLSJCIWJGFQPIEWH";
    int len=str.length();
    count(str,len);
}