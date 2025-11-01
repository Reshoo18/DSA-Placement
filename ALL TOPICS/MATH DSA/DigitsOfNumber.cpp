#include<iostream>
using namespace std;
      
void countDig(int num){
    int sum=0;
    while(num!=0){
    int digit= num%10;
    sum+=digit;
    num=num/10;
    }
    cout<<sum;
}
int main(){
int num=3674;
countDig(num);
return 0;
}