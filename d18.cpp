//binar operator overloading
#include<iostream>
using namespace std;

class Data{
    int num1;
public:
    Data(){
     num1=0;
    }
    Data(int n){
         num1=n;
    }
    Data operator+(Data d){
        Data temp(0);
        temp.num1=num1+d.num1;
        return temp;
    }
    void display(){
        cout<<num1<<endl;
    }

};

int main (){
    Data d1(10),d2(20),d3(0);
    d3=d1+d2;
    d3.display();

    return 0;
}