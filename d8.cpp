#include<iostream>
using namespace std;

//  int main()
//  { int arr[5]={1,2,3,4,5};
//     for(int i=0; i<5; i++)
//     {
//         cout<<arr[i]<<" ";// here "arr" is the pointer to the first element of the array and arr[i] is the value at that index
//     }
//     cout<<endl;
//     cout<<arr<<endl;

//     return 0;
//  }
int main(){
    int a=4;
    cout<<addressof(a)<<endl;// finding addres of a variable using method 
    cout<<&a<<endl;// finding addres of a variable using & operator
    return 0;
}
