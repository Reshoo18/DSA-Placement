#include<iostream>
#include<climits>
using namespace std; 

int revrseANum(int num){
    int reverseNum=0;
    while (num!=0)
    {
        int dig=num%10;
        if(reverseNum>INT_MAX/10 || reverseNum<INT_MIN/10){
                return 0;
            }
    reverseNum=(reverseNum*10)+dig;
    num=num/10;
    }
    return reverseNum;
    
}
int main(){
int num=4537;
cout<<revrseANum(num);
return 0;
}