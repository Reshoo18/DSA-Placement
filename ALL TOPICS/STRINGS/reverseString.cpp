#include<iostream>
#include<vector>
using namespace std;
void reverseString(vector <char>str,int n){
    int st=0;
    int end=n-1;
    while(st<end){
        swap(str[st++],str[end--]);
    }
    for(int i=0 ;i<n;i++){
        cout<<str[i];
    }
    cout<<endl;
}
int main(){
vector<char> str = {'h','e','l','l','o'};
int n=str.size();
reverseString(str,n);
return 0;
}