#include<iostream>
using namespace std;

int digitSum =0;
int lastDig;
int sumOfLastDig(int num){
    while(num>0){
    int lastDig=num%10;
    num/=10;
    digitSum+=lastDig;
    }
    return digitSum;
}

int main(){
cout<<sumOfLastDig(145)<<endl;
return 0;
}