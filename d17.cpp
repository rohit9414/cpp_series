#include <iostream>
using namespace std;

class Data{
    int num1;
    public:
    Data(int n){
        num1=n;
    }
    // prefix ++
    Data& operator++(){
        ++num1;
        return *this;
    }
    // postfix ++,in postfix we have to write int in parameter to differentiate it from prefix
    Data operator++(int){
        Data temp(0);
        temp.num1=num1++;
        return temp;
    }
void display(){
    cout<<num1<<"\n"; 
}
};
int main(){
    Data d1(10),result(0);
    result=d1++;
    result.display();
    return 0;
}