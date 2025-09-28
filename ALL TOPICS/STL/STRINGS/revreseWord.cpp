#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

           
     string reverseWord(string s,int n){
        string ans ="";

        reverse(s.begin(),s.end());
        for(int i=0; i<n; i++){
           string word ="";
           while(i<n && s[i]!=' '){
            word += s[i];
            i++;
        }
           reverse(word.begin(),word.end());
           if(word.length()>0){
            ans += " " + word;
           }
           
    }
     return ans.substr(1);
     }

int main(){
    string s= " pen is blue";
    int n= s.length();
    cout<<reverseWord(s,n);

return 0;
}