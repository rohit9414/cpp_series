/* pass by value*/

#include<iostream>
using namespace std;
void change(int x){
    x=10;
    cout<<x<<endl;
}

int main(){
    int x=5;
    change(x);
    cout<<x<<endl;

}

/*pass by reference*/

// #include<iostream>
// using namespace std;
// void change(int x){
//     x=10;
//     cout<<x<<endl;
// }

// int main(){
//     int x=5;
//     change(x);
//     cout<<x<<endl;

// }
