#include<iostream>
using namespace std;

char alphabate(char n){
    if(int(n)>95){
         if(int(n)!=122){
            return n+1;
         }else{
            return 'a';
         }
    }else{
     if(int(n)!=95){
            return n+1;
         }else{
            return 'A';
         }
    }
}

int main(){
    
    cout<<alphabate('a')<<endl;
}