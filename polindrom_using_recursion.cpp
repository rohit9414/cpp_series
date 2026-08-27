#include<iostream>
using namespace std;
 string polin(string str,int srt,int end){
       if(srt>=end){
        return "a plindrom";
       }
    if(str[srt]!=str[end]){
        
        return "not a polindrom";
    }
    return polin(str,++srt,--end);//prepost hoga pahle increament the pass the value
 }
int main(){
  string str="1221";
  int len=str.length()-1;
  string ans=polin(str,0,len);
  cout<<ans<<endl;
}

//to convert a lowercase string into upper case string use "A+r-a";
//viceversa :"a+R-A";
