#include<iostream>
using namespace std;
// array-> linear data structure
// store data in linear contiguous memeory allocation. 
// fixed or statis size.
// with the help of indexing ,we can access the element.
// it store the similar data type.
//fragmentation.for large size

void swap(int arr[]) {// arr[] is also a pointer creation method, so in terms of array int arr[] is the integer pointer.
    int temp = arr[0];
    cout << arr[0] << " " << arr[1]<<" " ;
    arr[0] = arr[1];
    arr[1] = temp;
    cout << arr[0] << " " << arr[1]<<" ";
}

int main(){
//  int arr[5];// here arr store address of first index of the arr[].
//  cout<<arr<<endl;//0x7ffdb7508fb0
//  cout<<arr+1<<endl;//0x7ffdb7508fb4
//  cout<<arr+2<<endl;//0x7ffdb7508fb8

int data[2];
data[0]=10;
data[1]=20;
swap(data);// as data is pointer , so it is passed by pointer.
cout<<data[0]<<" "<<data[1]<<endl;
}