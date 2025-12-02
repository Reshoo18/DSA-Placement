#include<iostream>
using namespace std;
int sumOfNum(int n){
     if(n==0){
        return 0;
     }
    return n+sumOfNum(n-1);
}

int main(){
cout<<sumOfNum(10);
return 0;
}