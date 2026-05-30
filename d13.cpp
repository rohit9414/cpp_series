#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

bool isalnum(char ch){
    if((tolower(ch)>=0 && tolower(ch)<=9)||(tolower(ch)>= 'a' && tolower(ch)<= 'z')){
        return true;
    }else{
        return false;
    }
}

int main(){
    string str1="r@ac&bec$ar";
    int st=0;
    int end=str1.length()-1;
    while(st<end){
        if(!isalnum(str1[st])){
            st++;
        }
       if(!isalnum(str1[end])){
         end--;
       }
       if(tolower(str1[st])!=tolower(str1[end])){
            cout<<"not a palindrome"<<endl;
            return 0;
       }
       else{
        st++;
        end--;
       }
    }
    cout<<"palindrome"<<endl;
}
