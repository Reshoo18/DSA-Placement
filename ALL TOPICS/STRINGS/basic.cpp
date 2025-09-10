#include<iostream>
#include<string>
using namespace std;
int main(){

 
    char str1[100];

    cout<<"enter your string:";
    cin.getline(str1,100,'$');
       cout<<"output :"<<str1<<endl;


   string str2="reshoo ranjan";
   cout<<(str2.length())<<endl;

char str3[]={'a','b','c','\0'};
  cout<<str3<<endl;
return 0;
}