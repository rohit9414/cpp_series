//Decimal to binar conversion
#include<iostream>
#include <cmath>
using namespace std;

int binconversion(int num){
    int bit=0,bin=0;
    int n=0;
    while(num!=0){
       bit=num%2;
       bin=bin + bit*pow(10,n);
    //    cout<<bin<<endl;
       num=int(num/2);
    //    cout<<num<<endl;
       n++;
    }
    return bin;
}
int main(){
    int num;
    cin>>num;
    cout<<binconversion(num)<<endl;
    return 0;
}