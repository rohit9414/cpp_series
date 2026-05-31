#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
//character string problems 
int main(){
// char str[]={'a','b','c'};// method 1
// char str[]="rohit";//method 2
// char str[10];
// cin>>str;// take single word

// char str[100];
//    cin.getline(str, 100, '$'); // getline(string_name, no_of_chars, delimiter)
//    cout<<str<<endl;
//     cout<<strlen(str)<<endl;

//string
// string str="rohit kumar";//also
// getline(cin, str); // for taking input of string with spaces// also reassinge
// cout<<str<<endl;

// string str1="rohit ";
// string str2="kumar";
// // string str3=str1+str2;// also
// string str3=str1.append(str2);// also
// cout<<str3<<endl;// note is same as in python

//palindrome
string str1="racecar";
string str2=str1;
reverse(str1.begin(), str1.end());
if(str1==str2){
    cout<<"palindrome"<<endl;
}
else{
    cout<<"not palindrome"<<endl;
}
}