//ostream overloading using friend function
#include<iostream>
using namespace std;

 class Data{
    private:
    int a;
 public:
 
    Data(int x){
        a = x;
    }

   friend  ostream& operator<<(ostream& out,Data d);
 };
  ostream& operator<<(ostream& out,Data d){

    out<<d.a;
    return out;
    }
int main (){
   Data d(10);
   cout<<d<<endl;
    return 0;
}