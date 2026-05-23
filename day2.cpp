#include<iostream>
using namespace std;
int main(){
    cout<<"hello\n";
    int age =25;
    float pi =3.14f;/*for floating value we write f otherwise it take as double */
    char ch='a';
    double d=3.14;//8bytes //by default floating point value is double
    bool isAdult=true;// true converted to 1 and false converted to 0
    cout<<sizeof(age)<<endl;//4bytes
    cout<<sizeof(pi)<<endl;//4bytes
    cout<<sizeof(ch)<<endl;//1byte
    cout<<sizeof(isAdult)<<endl;//1byte

    //typecasting there are two types of typecasting in c++ 
    //1. implicit typecasting-> done by compiler automatically
    // code example
    int a=10;
    float b=a;// implicit typecasting from int to float
    cout<<b<<endl;//10.0
    //2. explicit typecasting-> done by programmer using cast operator
    float c=3.14f;
    int d1=(int)c;// explicit typecasting from float to int
    cout<<d1<<endl;//3
    return 0;
}
 